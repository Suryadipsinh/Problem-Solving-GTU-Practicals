/*
Practical-13 Write a c program to prepare pay slip using the following data.
Da = 10% of basic, Hra = 7.50% of basic, Ma = 300,
Pf = 12.50% of basic, Gross = basic + Da + Hra + Ma, Nt = Gross – Pf.
*/

float basic,Da,Hra,Pf,Gross,Nt,Ma = 300;
            printf("Enter Basic Salary: ");
            scanf("%f",&basic);
            printf("\n----Preparing a Pay Slip----");
            Da = 0.10*basic;
            Hra = 0.075*basic;
            Pf = 0.125*basic;
            Gross = basic+Da+Hra+Ma;
            Nt = Gross-Pf;
            printf("\nDa: %f \nHra: %f \nPf: %f ",Da,Hra,Pf);
            printf("\nGross: %f \nNt: %f",Gross,Nt);

/*
Explanation
This program prepares a pay slip using the following data.
Da = 10% of basic, Hra = 7.50% of basic, Ma = 300,
Pf = 12.50% of basic, Gross = basic + Da + Hra + Ma, Nt = Gross – Pf. And prints them on different lines.
*/
