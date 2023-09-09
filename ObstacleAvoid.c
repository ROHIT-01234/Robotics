#pragma config(Sensor, S4,     ultra,          sensorSONAR)
#pragma config(Motor,  motorB,          r,             tmotorNXT, PIDControl, encoder)
#pragma config(Motor,  motorC,          l,             tmotorNXT, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

void straight()
{
	motor[l]=50;
	motor[r]=50;
}

void stopr()
{
	motor[l]=50;
	motor[r]=50;
	wait1Msec(700);
}

void right()
{
	motor[l]=-50;
	motor[r]=-50;
	wait1Msec(400);
	motor[l]=0;
	motor[r]=-50;
	wait1Msec(1350);
}

void rotate()
{
		motor[l]=50;
		motor[r]=-50;
	wait1Msec(800);
}

task main()
{
	while(true)
	{
		while(SensorValue(ultra)>60)
		{
			straight();
			stopr();
		}
		//right();
		rotate();
		stopr();
	}
}
