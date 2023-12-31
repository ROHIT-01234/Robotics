#pragma config(Motor,  motorB,          r,             tmotorNXT, PIDControl, encoder)
#pragma config(Motor,  motorC,          l,             tmotorNXT, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

void clear()
{
	nMotorEncoder[l]=0;
	nMotorEncoder[r]=0;
}

void straight(int i)
{
	while(nMotorEncoder[l]<i && nMotorEncoder[r]<i )
	{
		motor[l]=50;
		motor[r]=50;
	}
}

void left()
{
	while(nMotorEncoder[r]<500 )
	{
		motor[l]=0;
		motor[r]=50;
	}
}

void right()
{
	while(nMotorEncoder[l]<500 )
	{
		motor[l]=50;
		motor[r]=0;
	}
}

void stopr()
{
	motor[l]=0;
	motor[r]=0;
}



task main()
{
	clear();
	straight(1500);
	stopr();

	clear();
	left();
	stopr();

	clear();
	straight(1200);
	stopr();

	clear();
	right();
	stopr();

	clear();
	straight(900);
	stopr();

	clear();
	right();
	stopr();

	clear();
	straight(900);
	stopr();

}
