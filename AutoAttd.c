#pragma config(Sensor, S3,     light,          sensorLightActive)
#pragma config(Sensor, S4,     ultra,          sensorSONAR)
#pragma config(Motor,  motorB,          r,             tmotorNXT, PIDControl, encoder)
#pragma config(Motor,  motorC,          l,             tmotorNXT, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

void move()
{
		motor[l]=50;
		motor[r]=50;
		wait1Msec(600);
}
void rotate()
{
	motor[l]=-50;
	motor[r]=50;
	wait1Msec(1580);
}
void stopr()
{
	motor[l]=0;
	motor[r]=0;
	wait1Msec(1000);
}


task main()
{
	int count = 0;
	for(int i =0;i<2;i++)
	{
		for(int j=0;j<3;j++)
			{
				move();
				while(SensorValue[light]>50)
				{
					motor[l]=50;
					motor[r]=50;
				}
				stopr();
				if(SensorValue(ultra)>100)
				{
					count = count + 1;
				nxtDisplayCenteredTextLine(1,"Present :");
				nxtDisplayCenteredTextLine(2,"%d",count);
				}
			}
			move();
			stopr();
			rotate();
			stopr();
	}
}