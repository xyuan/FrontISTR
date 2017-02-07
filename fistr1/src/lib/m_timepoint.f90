!-------------------------------------------------------------------------------
! Copyright (c) 2016 The University of Tokyo
! This software is released under the MIT License, see LICENSE.txt
!-------------------------------------------------------------------------------
!>   This module manages timepoint infomation
module m_timepoint
  use hecmw
  implicit none

  integer, parameter :: tprSTEP  = 1
  integer, parameter :: tprTOTAL = 2

  !> Time points storage for output etc.
  type time_points
    character( len=80 )        :: name                 !< name of timepoints
    integer                    :: n_points             !< # of time points
    integer                    :: range_type           !< 1: Step time, 2: Total time
    real(kind=kreal), pointer  :: points(:) => null()  !< values of time points
   end type

   contains

   subroutine init_time_points(tp)
    type(time_points), intent(inout) :: tp

    tp%name = ''
    tp%n_points = 0
    tp%range_type = tprSTEP
   end subroutine

   subroutine print_time_points(tp)
    type(time_points), intent(in)    :: tp

    write(*,*) 'timepoints name=',trim(tp%name)
    write(*,*) 'n_points, range_type',tp%n_points, tp%range_type
    write(*,*) 'points'
    if( associated(tp%points) ) then
      write(*,*) tp%points
    else
      write(*,*) ' not allocated.'
    endif
   end subroutine

   logical function is_at_timepoints(time,tp)
     real(kind=kreal), intent(in) :: time  !< current time
    type(time_points), intent(in) :: tp

    integer           :: i

    is_at_timepoints =.false.
    do i=1,tp%n_points
      if( dabs(time-tp%points(i)) > 1.d-10 ) cycle
      is_at_timepoints = .true.
      exit
    end do

   end function

   real(kind=kreal) function get_remain_to_next_timepoints(time,tp)
     real(kind=kreal), intent(in) :: time  !< current time
    type(time_points), intent(in) :: tp

    integer           :: i

    get_remain_to_next_timepoints = 1.d+10
    if( time<tp%points(1) ) then
      get_remain_to_next_timepoints = tp%points(1)-time
    end if
    do i=1,tp%n_points-1
      if( time < tp%points(i) ) cycle
      if( time >= tp%points(i+1)-1.d-10 ) cycle
      get_remain_to_next_timepoints = tp%points(i+1)-time
      exit
    end do

   end function

end module
