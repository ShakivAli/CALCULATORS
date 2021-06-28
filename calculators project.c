#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
	int addition()                                                              //1) Addition
	{
		int i,limit,sum=0,choice;
		printf("ENTER COUNT OF NUMBERS YOU WANT TO ENTER=");
		scanf("%d",&limit);
		int *a=(int*)malloc(sizeof(int)*limit);
		printf("ENTER NUMBERS-\n");
		for(i=0;i<limit;i++)
		{
			scanf("%d",&a[i]);
		}
		printf("SUM OF ALL NUMBERS IS=");
		for(i=0;i<limit;i++)
		{
			sum=sum+a[i];
		}
		printf("%d",sum);
		printf("\nENTER 1 FOR CHECKING NUMBERS AGAIN OR ANYTHING TO EXIT=");
		scanf("%d",&choice);
		if(choice==1)
		{
			printf("NUMBERS ARE...");
			for(i=0;i<limit;i++)
			{
				printf("%d,",a[i]);
			}
			printf("\nTHANKYOU! FOR USING ADDITION CALCULATOR :)");
		}
		else
		{
			printf("\nTHANKYOU! FOR USING ADDITION CALCULATOR :)");
		}
	}
	int subtraction()                                                         //2) Subtraction
	{
		int i,limit,choice,d;
		printf("ENTER COUNT OF NUMBERS YOU WANT TO ENTER=");
		scanf("%d",&limit);
		int *a=(int*)malloc(sizeof(int)*limit);
		printf("ENTER NUMBERS-\n");
		for(i=0;i<limit;i++)
		{
			scanf("%d",&a[i]);
		}
		d=a[0];
		printf("DIFFERENCE OF ALL NUMBERS IS=");
		for(i=1;i<limit;i++)
		{
			d=d-a[i];
		}
		printf("%d",d);
		printf("\nENTER 1 FOR CHECKING NUMBERS AGAIN OR ANYTHING TO EXIT=");
		scanf("%d",&choice);
		if(choice==1)
		{
			printf("NUMBERS ARE...");
			for(i=0;i<limit;i++)
			{
				printf("%d,",a[i]);
			}
			printf("\nTHANKYOU! FOR USING SUBTRACTION CALCULATOR :)");
		}
		else
		{
			printf("\nTHANKYOU! FOR USING SUBTRACTION CALCULATOR :)");
		}
	}
	int multiplication()                                                                 //3) Multiplication
	{
		int i,limit,ans=1,choice;
		printf("ENTER COUNT OF NUMBERS YOU WANT TO ENTER=");
		scanf("%d",&limit);
		int *a=(int*)malloc(sizeof(int)*limit);
		printf("ENTER NUMBERS-\n");
		for(i=0;i<limit;i++)
		{
			scanf("%d",&a[i]);
		}
		printf("MULTIPLICATION OF ALL NUMBERS IS=");
		for(i=0;i<limit;i++)
		{
			ans=ans*(a[i]);
		}
		printf("%d",ans);
		printf("\nENTER 1 FOR CHECKING NUMBERS AGAIN OR ANYTHING TO EXIT=");
		scanf("%d",&choice);
		if(choice==1)
		{
			printf("NUMBERS ARE...");
			for(i=0;i<limit;i++)
			{
				printf("%d,",a[i]);
			}
			printf("\nTHANKYOU! FOR USING MULTIPLICATION CALCULATOR :)");
		}
		else
		{
			printf("\nTHANKYOU! FOR USING MULTIPLICATION CALCULATOR :)");
		}	
	}
	int division()                                                                         //4) division
	{
		int ans,ans1,choice,dividend,divisor;
		printf("ENTER DIVIDEND-\n");
		scanf("%d",&dividend);
		printf("ENTER DIVISOR-\n");
		scanf("%d",&divisor);
		ans=dividend/divisor;
		ans1=dividend%divisor;
		printf("\nAFTER DIVISION QUOTIENT IS=%d",ans);
		printf("\nAFTER DIVISION REMAINDER IS=%d",ans1);
		printf("\nENTER 1 FOR CONTINUE FURTHER OR ENTER ANYTHING TO EXIT=");
		scanf("%d",&choice);
		if(choice==1)
		{
			division();
		}
		else
		{
			printf("\nTHANKYOU! FOR USING DIVISION CALCULATOR :)");
		}	
	}
	int base_convertor()                                                         // 5) Base convertot
	{
		int base,num,num1,num2,a[10],i;
		    printf("\nENTER DECIMAL NUMBER=");
		    scanf("%d",&num);
		    num1=num;
		    num2=num;
			for(i=0;num>0;i++)    
            {    
            a[i]=num%2;    
            num=num/2;    
            }    
            printf("\nBINARY OF NUMBER IS=");    
            for(i=i-1;i>=0;i--)    
            {    
            printf("%d",a[i]);    
            } 
			for(i=0;num1>0;i++)    
            {    
            a[i]=num1%8;    
            num1=num1/8;    
            }
			printf("\nOCTAL OF NUMBER IS="); 
			for(i=i-1;i>=0;i--)    
            {    
            printf("%d",a[i]);    
            }     
			for(i=0;num2>0;i++)    
            {    
            a[i]=num2%16;    
            num2=num2/16;    
            }
			printf("\nHEXADECIMAL OF NUMBER IS="); 
			for(i=i-1;i>=0;i--)    
            {    
			if(a[i]==10)
			printf("A");
			else if(a[i]==11)
			printf("B");
			else if(a[i]==12)
			printf("C");
			else if(a[i]==13)
			printf("D");
			else if(a[i]==14)
			printf("E");
			else if(a[i]==15)
			printf("F");
			else
			printf("%d",a[i]);    
            } 
			printf("\nTHANKYOU! FOR USING BASE CONVERTOR :)");      
            return 0;  		
	}
	int parallelogram_method()                                                 // 6) parallelogram method
	{
		float force1,force2,resultant,angle,direction,pi=3.14159265359,temp1;
		printf("\nENTER MAGNITUDE OF FIRST FORCE (IN N)=");
		scanf("%f",&force1);
		printf("\nENTER MAGNITUDE OF SECOND FORCE (IN N)=");
		scanf("%f",&force2);
		printf("\nENTER MAGNITUDE OF ANGLE BETWEEN FIRST AND SECOND FORCE (IN RADIANS)=");
		scanf("%f",&angle);
		resultant=sqrt((force1*force1)+(force2*force2)+2*force1*force2*cosf(angle));
		printf("\nRESULTANT IS (IN N)=%f",resultant);
    	temp1=(force2*sinf(angle))/(force1+(force2*cosf(angle)));
		direction=atanf(temp1);
		direction=(direction*180)/pi;
		printf("\nDIRECTION OF RESULTANT IS (IN DEGREES)=%f",direction);
		printf("\nTHANK TYOU! FOR USING PARALLELOGRAM METHOD CALCULATOR :)");
	}
	int sine_law()                                                               //7) Sine law
	{
		float force1,force2,resultant,angle1,angle2,angle3;
		printf("\nENTTER MAGNITUDE OF FIRST FORCE (IN N) (TYPE 0 IF IT IS UNKNOWN)=");
		scanf("%f",&force1);
		printf("\nENTTER MAGNITUDE OF SECOND FORCE (IN N) (TYPE 0 IF IT IS UNKNOWN)=");
		scanf("%f",&force2);
		printf("\nENTTER MAGNITUDE OF RESULTANT (IN N) (TYPE 0 IF IT IS UNKNOWN)=");
		scanf("%f",&resultant);
		printf("\nENTER MAGNITUDE OF ANGLE BETWEEN SECOND FORCE AND RESULTANT (IN RADIANS)=");
		scanf("%f",&angle1);
		printf("\nENTER MAGNITUDE OF ANGLE BETWEEN FIRST FORCE AND RESULTANT (IN RADIANS)=");
		scanf("%f",&angle2);
		printf("\nENTER MAGNITUDE OF ANGLE BETWEEN FIRST FORCE AND SECOND FORCE (IN RADIANS)=");
		scanf("%f",&angle3);
		if(force1==0 && force2==0 && resultant!=0)
		{
			force1=(resultant*sinf(angle1))/(sinf(angle3));
			printf("\nMAGNITUDE OF FIRST FORCE IS=%f",force1);
			force2=(resultant*sinf(angle2))/(sinf(angle3));
			printf("\nMAGNITUDE OF SECOND FORCE IS=%f",force2);
		}
		else if(force1==0 && resultant==0 && force2!=0)
		{
			force1=(force2*sinf(angle1))/(sinf(angle2));
			printf("\nMAGNITUDE OF FIRST FORCE IS=%f",force1);
			resultant=(force2*sinf(angle3))/(sinf(angle2));
			printf("\nMAGNITUDE OF RESULTANT IS=%f",resultant);
		}
		else if(force2==0 && resultant==0 && force1!=0)
		{
			force2=(force1*sinf(angle2))/(sinf(angle1));
			printf("\nMAGNITUDE OF SECOND FORCE IS=%f",force2);
			resultant=(force1*sinf(angle3))/(sinf(angle1));
			printf("\nMAGNITUDE OF RESULTANT IS=%f",resultant);
		}
		else
		{
			printf("\nINVALID ENTRIES!");
		}
		printf("\nTHANK TYOU! FOR USING SINE LAW CALCULATOR :)");
	}
	int lamis_theorem()                                               //8) Lamis theorem
	{
		float choice,force1,force2,force3,resultant,angle1,angle2,angle3;
		printf("\nENTER 1 IF RESULTANT IS THERE OR ANYTHING IF NOT=");
		scanf("%f",&choice);
		if(choice==1)
		{
		printf("\nENTTER MAGNITUDE OF FIRST FORCE (IN N) (TYPE 0 IF IT IS UNKNOWN)=");
		scanf("%f",&force1);
		printf("\nENTTER MAGNITUDE OF SECOND FORCE (IN N) (TYPE 0 IF IT IS UNKNOWN)=");
		scanf("%f",&force2);
		printf("\nENTTER MAGNITUDE OF RESULTANT (IN N) (TYPE 0 IF IT IS UNKNOWN)=");
		scanf("%f",&resultant);
		printf("\nENTER MAGNITUDE OF ANGLE BETWEEN SECOND FORCE AND RESULTANT (IN RADIANS)=");
		scanf("%f",&angle1);
		printf("\nENTER MAGNITUDE OF ANGLE BETWEEN FIRST FORCE AND RESULTANT (IN RADIANS)=");
		scanf("%f",&angle2);
		printf("\nENTER MAGNITUDE OF ANGLE BETWEEN FIRST FORCE AND SECOND FORCE (IN RADIANS)=");
		scanf("%f",&angle3);
		if(force1==0 && force2==0 && resultant!=0)
		{
			force1=(resultant*sinf(angle1))/(sinf(angle3));
			printf("\nMAGNITUDE OF FIRST FORCE IS=%f",force1);
			force2=(resultant*sinf(angle2))/(sinf(angle3));
			printf("\nMAGNITUDE OF SECOND FORCE IS=%f",force2);
		}
		else if(force1==0 && resultant==0 && force2!=0)
		{
			force1=(force2*sinf(angle1))/(sinf(angle2));
			printf("\nMAGNITUDE OF FIRST FORCE IS=%f",force1);
			resultant=(force2*sinf(angle3))/(sinf(angle2));
			printf("\nMAGNITUDE OF RESULTANT IS=%f",resultant);
		}
		else if(force2==0 && resultant==0 && force1!=0)
		{
			force2=(force1*sinf(angle2))/(sinf(angle1));
			printf("\nMAGNITUDE OF SECOND FORCE IS=%f",force2);
			resultant=(force1*sinf(angle3))/(sinf(angle1));
			printf("\nMAGNITUDE OF RESULTANT IS=%f",resultant);
		}
		else
		{
			printf("\nINVALID ENTRIES!");
		}
		}
		else
		{
		printf("\nENTTER MAGNITUDE OF FIRST FORCE (IN N) (TYPE 0 IF IT IS UNKNOWN)=");
		scanf("%f",&force1);
		printf("\nENTTER MAGNITUDE OF SECOND FORCE (IN N) (TYPE 0 IF IT IS UNKNOWN)=");
		scanf("%f",&force2);
		printf("\nENTTER MAGNITUDE OF THIRD FORCE (IN N) (TYPE 0 IF IT IS UNKNOWN)=");
		scanf("%f",&force3);
		printf("\nENTER MAGNITUDE OF ANGLE BETWEEN SECOND FORCE AND THIRD FORCE (IN RADIANS)=");
		scanf("%f",&angle1);
		printf("\nENTER MAGNITUDE OF ANGLE BETWEEN FIRST FORCE AND THIRD FORCE (IN RADIANS)=");
		scanf("%f",&angle2);
		printf("\nENTER MAGNITUDE OF ANGLE BETWEEN FIRST FORCE AND SECOND FORCE (IN RADIANS)=");
		scanf("%f",&angle3);
		if(force1==0 && force2==0 && force3!=0)
		{
			force1=(force3*sinf(angle1))/(sinf(angle3));
			printf("\nMAGNITUDE OF FIRST FORCE IS=%f",force1);
			force2=(force3*sinf(angle2))/(sinf(angle3));
			printf("\nMAGNITUDE OF SECOND FORCE IS=%f",force2);
		}
		else if(force1==0 && force3==0 && force2!=0)
		{
			force1=(force2*sinf(angle1))/(sinf(angle2));
			printf("\nMAGNITUDE OF FIRST FORCE IS=%f",force1);
			force3=(force2*sinf(angle3))/(sinf(angle2));
			printf("\nMAGNITUDE OF THIRD FORCE IS=%f",force3);
		}
		else if(force2==0 && force3==0 && force1!=0)
		{
			force2=(force1*sinf(angle2))/(sinf(angle1));
			printf("\nMAGNITUDE OF SECOND FORCE IS=%f",force2);
			force3=(force1*sinf(angle3))/(sinf(angle1));
			printf("\nMAGNITUDE OF THIRD FORCE IS=%f",force3);
		}
		else
		{
			printf("\nINVALID ENTRIES!");
		}
		}
		printf("\nTHANK TYOU! FOR USING LAMI\'S THEOREM CALCULATOR :)");
	}
	int angle_of_friction()                                                     //9) Angle of friction
	{
		float angle,coefficient,pi=3.14159265359;
		printf("\nENTER COEFFICIENT OF FRICTION VALUE=");
		scanf("%f",&coefficient);
		angle=atanf(coefficient);
		angle=(angle*180)/pi;
		printf("\nANGLE OF FRICTION IS (IN DEGREES)=%f",angle);
		printf("\nTHANK TYOU! FOR USING ANGLE OF FRICTION CALCULATOR :)");
	}
	int type_of_truss()                                                          //10) type of truss
	{
		int member,joints,temp;
		printf("\nENTER NUMBER OF MEMBERS PRESENT IN A TRUSS=");
		scanf("%d",&member);
		printf("\nENTER NUMBER OF JOINTS PRESENT IN A TRUSS=");
		scanf("%d",&joints);
		temp=(2*joints)-3;
		if(member==temp)
		{
			printf("\nTRUSS IS PERFECT! :)");
		}
		if(member<temp)
		{
			printf("\nTRUSS IS DEFICIENT! :(");
		}
		if(member>temp)
		{
			printf("\nTRUSS IS REDUNDANT! :/");
		}
		printf("\nTHANK TYOU! FOR USING TYPE OF TRUSS CHECKER :)");
	}
	int uni_rec_motion()                                                                     // 11) uni rec motion
	{
		float initial,final,finalv,time;
		printf("\nENTER VALUE OF INITIAL POSITION (IN M) (TYPE 0 IF UNKNOWN)=");
		scanf("%f",&initial);
		printf("\nENTER VALUE OF FINAL POSITION (IN M) (TYPE 0 IF UNKNOWN)=");
		scanf("%f",&final);
		printf("\nENTER VALUE OF FINAL VELOCITY (IN M/S) (TYPE 0 IF UNKNOWN)=");
		scanf("%f",&finalv);
		printf("\nENTER VALUE OF TIME TAKEN (IN S) (TYPE 0 IF UNKNOWN)=");
		scanf("%f",&time);
		if(initial==0 && final!=0 && finalv!=0 && time!=0)
		{
			initial=(final)-(finalv*time);
			printf("\nINITIAL POSITION IS=%f",initial);
		}
		else if(initial!=0 && final==0 && finalv!=0 && time!=0)
		{
			final=(initial)+(finalv*time);
			printf("\nFINAL POSITION IS=%f",final);
		}
		else if(initial!=0 && final!=0 && finalv==0 && time!=0)
		{
			finalv=(final-initial)/time;
			printf("\nFINAL VELOCITY=%f",finalv);
		}
		else if(initial!=0 && final!=0 && finalv!=0 && time==0)
		{
			time=(final-initial)/finalv;
			printf("\nTIME IS=%f",time);
		}
		else
		{
			printf("\nONLY ONE MUST BE UNKNOWN!");
		}
		printf("\nTHANK TYOU! FOR USING UNIFORM RECTILINEAR MOTION CALCULATOR :)");
	} 
	int uni_acc_rec_motion()                                                          //12) uni acc rec motion
	{
		float initial,final,initialv,finalv,time,acc,temp;
		printf("\nENTER VALUE OF INITIAL POSITION (IN M) (TYPE 0 IF UNKNOWN)=");
		scanf("%f",&initial);
		printf("\nENTER VALUE OF FINAL POSITION (IN M) (TYPE 0 IF UNKNOWN)=");
		scanf("%f",&final);
		printf("\nENTER VALUE OF INITIAL VELOCITY (IN M/S) (TYPE 0 IF UNKNOWN)=");
		scanf("%f",&initialv);
		printf("\nENTER VALUE OF FINAL VELOCITY (IN M/S) (TYPE 0 IF UNKNOWN)=");
		scanf("%f",&finalv);
		printf("\nENTER VALUE OF TIME TAKEN (IN S) (TYPE 0 IF UNKNOWN)=");
		scanf("%f",&time);
		printf("\nENTER VALUE OF ACCELERATION (IN M/S^2) (TYPE 0 IF UNKNOWN)=");
		scanf("%f",&acc);
		if(initialv==0 && finalv!=0 && initial!=0 && final!=0 && time!=0 && acc!=0)
		{
			initialv=(finalv)-(acc*time);
			printf("\nINITIAL VELOCITY IS=%f",initialv);
		}
		else if(initialv!=0 && finalv==0 && initial!=0 && final!=0 && time!=0 && acc!=0)
		{
			finalv=(initialv)+(acc*time);
			printf("\nFINAL VELOCITY IS=%f",finalv);
		}
		else if(initialv!=0 && finalv!=0 && initial==0 && final!=0 && time!=0 && acc!=0)
		{
			initial=(final)-((initialv*time)+(0.5*acc*time*time));
			printf("\nINITIAL POSITION IS=%f",initial);
		}
		else if(initialv!=0 && finalv!=0 && initial!=0 && final==0 && time!=0 && acc!=0)
		{
			final=(initial)+(initialv*time)+(0.5*acc*time*time);
			printf("\nFINAL POSITION IS=%f",final);
		}
		else if(initialv!=0 && finalv!=0 && initial!=0 && final!=0 && time==0 && acc!=0)
		{
			time=(finalv-initialv)/acc;
			printf("\nTIME TAKEN IS=%f",time);
		}
		else if(initialv!=0 && finalv!=0 && initial!=0 && final!=0 && time!=0 && acc==0)
		{
			acc=(finalv-initialv)/time;
			printf("\nACCELERATION IS=%f",acc);
		}
		else
		{
			printf("\nONLY ONE MUST BE UNKNOWN!");
	    }
	    temp=final-initial;
		printf("\nDISTANCE IS=%f",temp);
		printf("\nTHANK TYOU! FOR USING UNIFORM ACCELERATED RECTILINEAR MOTION CALCULATOR :)");
	}
	int special_cal()                                                                       //13) special one
	{
		float work,force,distance,power,mass,height,g=9.81,penergy,kenergy,velocity,torque,disp,momentum,time;
		int choice,choice1;
		printf("\nENTER 1 FOR WORK DONE CALCULATION\n");
		printf("\nENTER 2 FOR POWER CALCULATION\n");
		printf("\nENTER 3 FOR POTENTIAL ENERGY CALCULATION\n");
		printf("\nENTER 4 FOR KINETIC ENERGY CALCULATION\n");
		printf("\nENTER 5 FOR TORQUE CALCULATION\n");
		printf("\nENTER 6 FOR FINDING WORK DONE BY TORQUE\n");
		printf("\nENTER 7 FOR FINDING KINETIC ENERGY OF ROTATION\n");
		printf("\nENTER 8 FOR FINDING ANGULAR MOMENTUM\n");
		printf("\nYOUR CHOICE IS=");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("\nENTER VALUE OF FORCE (IN N)=");
		        scanf("%f",&force);
		        printf("\nENTER VALUE OF DISTANCE (IN M)=");
		        scanf("%f",&distance);
		        work=force*distance;
		        printf("\nWORK DONE IS (IN J)=%f",work);
		        printf("\n\nPRESS 1 FOR CONTINUE ABOVE CALCULATOR AGAIN OR PRESS ANYTHING TO EXIT=");
		        scanf("%d",&choice1);
		        if(choice1==1)
		        special_cal();
		        break;
		    case 2:
		    	printf("\nENTER VALUE OF WORK DONE (IN J)=");
		    	scanf("%f",&work);
		    	printf("\nENTER VALUE OF TIME (IN S)=");
		    	scanf("%f",&time);
		    	power=work/time;
		    	printf("\nPOWER IS (IN W)=%f",power);
		    	printf("\n\nPRESS 1 FOR CONTINUE ABOVE CALCULATOR AGAIN OR PRESS ANYTHING TO EXIT=");
		        scanf("%d",&choice1);
		        if(choice1==1)
		        special_cal();
		    	break;
		    case 3:
		    	printf("\nENTER VALUE OF MASS (IN KG)=");
		    	scanf("%f",&mass);
		    	printf("\nENTER VALUE OF HEIGHT (IN M)=");
		    	scanf("%f",&height);
		    	penergy=mass*g*height;
		    	printf("\nPOTENTIAL ENERGY IS (IN J)=%f",penergy);
		    	printf("\n\nPRESS 1 FOR CONTINUE ABOVE CALCULATOR AGAIN OR PRESS ANYTHING TO EXIT=");
		        scanf("%d",&choice1);
		        if(choice1==1)
		        special_cal();
		    	break;
		    case 4:
		    	printf("\nENTER VALUE OF MASS (IN KG)=");
		    	scanf("%f",&mass);
		    	printf("\nENTER VALUE OF VELOCITY (IN M/S)=");
		    	scanf("%f",&velocity);
		    	kenergy=0.5*mass*velocity*velocity;
		    	printf("\nKINETIC ENERGY IS (IN J)=%f",kenergy);
		    	printf("\n\nPRESS 1 FOR CONTINUE ABOVE CALCULATOR AGAIN OR PRESS ANYTHING TO EXIT=");
		        scanf("%d",&choice1);
		        if(choice1==1)
		        special_cal();
		    	break;
		    case 5:
		    	printf("\nENTER VALUE OF FORCE (IN N)=");
		        scanf("%f",&force);
		        printf("\nENTER VALUE OF PERPENDICULAR DISTANCE (IN M)=");
		        scanf("%f",&distance);
		        torque=force*distance;
		        printf("\nTORQUE IS (IN N-M)=%f",torque);
		        printf("\n\nPRESS 1 FOR CONTINUE ABOVE CALCULATOR AGAIN OR PRESS ANYTHING TO EXIT=");
		        scanf("%d",&choice1);
		        if(choice1==1)
		        special_cal();
		        break;
		    case 6:
		    	printf("\nENTER VALUE OF TORQUE (IN N-M)=");
		    	scanf("%f",&torque);
		    	printf("\nENTER VALUE OF ANGULAR DISPLACEMENT (IN RADIANS)=");
		    	scanf("%f",&disp);
		    	work=torque*disp;
		    	printf("\nWORK DONE BY TORQUE IS (IN J)=%f",work);
		    	printf("\n\nPRESS 1 FOR CONTINUE ABOVE CALCULATOR AGAIN OR PRESS ANYTHING TO EXIT=");
		        scanf("%d",&choice1);
		        if(choice1==1)
		        special_cal();
		    	break;
		    case 7:
		    	printf("\nENTER VALUE OF MASS MOMENT OF INERTIA=");
		    	scanf("%f",&mass);
		    	printf("\nENTER VALUE OF AVERAGE VELOCITY=");
		    	scanf("%f",&velocity);
		    	kenergy=0.5*mass*velocity*velocity;
		    	printf("\nKINETIC ENERGY OF ROTATION IS (IN J)=%f",kenergy);
		    	printf("\n\nPRESS 1 FOR CONTINUE ABOVE CALCULATOR AGAIN OR PRESS ANYTHING TO EXIT=");
		        scanf("%d",&choice1);
		        if(choice1==1)
		        special_cal();
		    	break;
		    case 8:
		    	printf("\nENTER VALUE OF AVERAGE VELOCITY=");
		    	scanf("%f",&velocity);
		    	printf("\nENTER VALUE OF MASS MOMENT OF INERTIA=");
		    	scanf("%f",&mass);
		    	momentum=mass*velocity;
		    	printf("\nANGULAR MOMENTUM IS=%f",momentum);
		    	printf("\n\nPRESS 1 FOR CONTINUE ABOVE CALCULATOR AGAIN OR PRESS ANYTHING TO EXIT=");
		        scanf("%d",&choice1);
		        if(choice1==1)
		        special_cal();
		    	break;
		    default:
		    	printf("\n\nINVALID OPTION! CHOOSE AGAIN\n\n");
			    special_cal();
			    break;	
		}	
	}
	int choice,choice1;
	printf("\n\n\t\t\t\t CALCULATORS\n\n");
	printf("CHOOSE ANYONE-\n");
	printf("----------------\n");
	printf("1) ADDITION\n");
	printf("2) SUBTRACTION\n");
	printf("3) MULTIPLICATION\n");
	printf("4) DIVISION\n");
	printf("5) BASE CONVERTOR (FOR BASE 10)\n");
	printf("6) PARALLELOGRAM METHOD FOR RESULTANT\n");
	printf("7) SINE LAW OF FORCES\n");
	printf("8) LAMI\'S THEOREM\n");
	printf("9) ANGLE OF FRICTION CALCULATOR\n");
	printf("10) TYPE OF TRUSS (DEFICIENT,REDUNDANT,PERFECT) CHECKER\n");
	printf("11) UNIFORM RECTILINEAR MOTION\n");
	printf("12) UNIFORM ACCELERATED RECTILINEAR MOTION\n");
	printf("13) WORK DONE,POWER,POTENTIAL ENERGY,KINETIC ENERGY,TORQUE,WORK DONE BY TORQUE\n    KINETIC ENERGY OF ROTATION,ANGULAR MOMENTUM\n");
	printf("14) EXIT\n\n");
	printf("YOUR CHOICE IS=");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\n\nREDIRECTING TO ADDITION CALCULATOR...\n");
			printf("----------------\n");
			addition();
			printf("\n\nPRESS 1 TO CONTINUE FOR OTHER CALCULATORS OR PRESS ANYTHING TO EXIT=");
	        scanf("%d",&choice1);
	        if(choice1==1)
	        main();
	        else
	        printf("\n\nTHANK YOU! FOR USING CALCULATORS SERVICE :)");
			break;
		case 2:
			printf("\n\nREDIRECTING TO SUBTRACTION CALCULATOR...\n");
			printf("----------------\n");
			subtraction();
			printf("\n\nPRESS 1 TO CONTINUE FOR OTHER CALCULATORS OR PRESS ANYTHING TO EXIT=");
	        scanf("%d",&choice1);
	        if(choice1==1)
	        main();
	        else
	        printf("\n\nTHANK YOU! FOR USING CALCULATORS SERVICE :)");
			break;
		case 3:
			printf("\n\nREDIRECTING TO MULTIPLICATION CALCULATOR...\n");
			printf("----------------\n");
			multiplication();
			printf("\n\nPRESS 1 TO CONTINUE FOR OTHER CALCULATORS OR PRESS ANYTHING TO EXIT=");
	        scanf("%d",&choice1);
	        if(choice1==1)
	        main();
	        else
	        printf("\n\nTHANK YOU! FOR USING CALCULATORS SERVICE :)");
			break;
		case 4:
			printf("\n\nREDIRECTING TO DIVISION CALCULATOR...\n");
			printf("----------------\n");
			division();
			printf("\n\nPRESS 1 TO CONTINUE FOR OTHER CALCULATORS OR PRESS ANYTHING TO EXIT=");
	        scanf("%d",&choice1);
	        if(choice1==1)
	        main();
	        else
	        printf("\n\nTHANK YOU! FOR USING CALCULATORS SERVICE :)");
			break;
		case 5:
		    printf("\n\nREDIRECTING TO BASE CONVERTOR...\n");
			printf("----------------\n");
			base_convertor();
			printf("\n\nPRESS 1 TO CONTINUE FOR OTHER CALCULATORS OR PRESS ANYTHING TO EXIT=");
	        scanf("%d",&choice1);
	        if(choice1==1)
	        main();
	        else
	        printf("\n\nTHANK YOU! FOR USING CALCULATORS SERVICE :)");
			break;
		case 6:
			printf("\n\nREDIRECTING TO PARALLELOGRAM METHOD...\n");
			printf("----------------\n");
			parallelogram_method();
			printf("\n\nPRESS 1 TO CONTINUE FOR OTHER CALCULATORS OR PRESS ANYTHING TO EXIT=");
	        scanf("%d",&choice1);
	        if(choice1==1)
	        main();
	        else
	        printf("\n\nTHANK YOU! FOR USING CALCULATORS SERVICE :)");
			break;
		case 7:
			printf("\n\nREDIRECTING TO SINE LAW...\n");
			printf("----------------\n");
			sine_law();
			printf("\n\nPRESS 1 TO CONTINUE FOR OTHER CALCULATORS OR PRESS ANYTHING TO EXIT=");
	        scanf("%d",&choice1);
	        if(choice1==1)
	        main();
	        else
	        printf("\n\nTHANK YOU! FOR USING CALCULATORS SERVICE :)");
			break;
		case 8:
			printf("\n\nREDIRECTING TO LAMI\'S THEOREM...\n");
			printf("----------------\n");
			lamis_theorem();
			printf("\n\nPRESS 1 TO CONTINUE FOR OTHER CALCULATORS OR PRESS ANYTHING TO EXIT=");
	        scanf("%d",&choice1);
	        if(choice1==1)
	        main();
	        else
	        printf("\n\nTHANK YOU! FOR USING CALCULATORS SERVICE :)");
			break;
		case 9:
			printf("\n\nREDIRECTING TO ANGLE OF FRICTION CAlCULATOR...\n");
			printf("----------------\n");
			angle_of_friction();
			printf("\n\nPRESS 1 TO CONTINUE FOR OTHER CALCULATORS OR PRESS ANYTHING TO EXIT=");
	        scanf("%d",&choice1);
	        if(choice1==1)
	        main();
	        else
	        printf("\n\nTHANK YOU! FOR USING CALCULATORS SERVICE :)");
			break;
		case 10:
			printf("\n\nREDIRECTING TO TYPE OF TRUSS CHECKER...\n");
			printf("----------------\n");
			type_of_truss();
			printf("\n\nPRESS 1 TO CONTINUE FOR OTHER CALCULATORS OR PRESS ANYTHING TO EXIT=");
	        scanf("%d",&choice1);
	        if(choice1==1)
	        main();
	        else
	        printf("\n\nTHANK YOU! FOR USING CALCULATORS SERVICE :)");
			break;
		case 11:
			printf("\n\nREDIRECTING TO UNIFORM RECTILINEAR MOTION CALCULATOR...\n");
			printf("----------------\n");
			uni_rec_motion();
			printf("\n\nPRESS 1 TO CONTINUE FOR OTHER CALCULATORS OR PRESS ANYTHING TO EXIT=");
	        scanf("%d",&choice1);
	        if(choice1==1)
	        main();
	        else
	        printf("\n\nTHANK YOU! FOR USING CALCULATORS SERVICE :)");
			break;
		case 12:
			printf("\n\nREDIRECTING TO UNIFORM ACCELERATED RECTILINEAR MOTION CALCULATOR...\n");
			printf("----------------\n");
			uni_acc_rec_motion();
			printf("\n\nPRESS 1 TO CONTINUE FOR OTHER CALCULATORS OR PRESS ANYTHING TO EXIT=");
	        scanf("%d",&choice1);
	        if(choice1==1)
	        main();
	        else
	        printf("\n\nTHANK YOU! FOR USING CALCULATORS SERVICE :)");
			break;
		case 13:
			printf("\n\nREDIRECTING TO REQUIRED CALCULATOR...\n");
			printf("----------------\n");
			special_cal();
			printf("\n\nPRESS 1 TO CONTINUE FOR OTHER CALCULATORS OR PRESS ANYTHING TO EXIT=");
	        scanf("%d",&choice1);
	        if(choice1==1)
	        main();
	        else
	        printf("\n\nTHANK YOU! FOR USING CALCULATORS SERVICE :)");
			break;
		case 14:
	        printf("\n\nTHANK YOU! FOR USING CALCULATORS SERVICE :)");
	        break;
		default:
		    printf("\n\nINVALID OPTION! CHOOSE AGAIN\n\n");
			main();
			break;				
	}
}
