
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	// ���������� ���� Y � Z �� ������
	Trajectory.AxisY = &AxisY;
	Trajectory.AxisZ = &AxisZ;
	
	// ����������� ������������ �������� 0 ��� ������������� ����������
	Trajectory.length = 0;
	Move_axis.length = 0;
}

void _CYCLIC ProgramCyclic(void)
{	
	FB_Trajectory(&Trajectory); // ������������� ��������������� �����     
}

void _EXIT ProgramExit(void)
{

}

