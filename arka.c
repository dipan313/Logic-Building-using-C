#include <stdio.h>
#include<string.h>
struct housing
{
    float rent, maintenance, insurance, utilities, other;
};

struct food
{
    float groceries, eatingout, other;
};

struct transportation
{
    float carpay, ins, fuel, maint, parking, pub, other;
};

struct education
{
    float collegefees, tuition, stloan, other;
};

struct family
{
    float mobile, cloth, entertainment, household;
    float care, child, vacation, debt, other;
};

struct healthcare
{
    float medicine, insu, other;
};

struct savings
{
    float emefund, invest, other;
};

float totalhousing(struct housing house)
{
    float add;
    add = house.rent + house.maintenance + house.insurance + house.other + house.utilities;
    return add;
}
float totalfood(struct food fd)
{
    float add3;
    add3 = fd.groceries + fd.eatingout + fd.other;
    return add3;
}
float totaltransportation(struct transportation trans)
{
    float add2;
    add2 = trans.fuel + trans.ins + trans.maint + trans.pub + trans.other;
    return add2;
}

float totaledu(struct education edu)
{
    float add4;
    add4 = edu.tuition + edu.stloan + edu.other;
    return add4;
}
float totalfamily(struct family fm)
{
    float add5;
    add5 = fm.mobile + fm.cloth + fm.entertainment + fm.other;
    return add5;
}
float totalhealth(struct healthcare hc)
{
    float add6;
    add6 = hc.medicine + hc.insu + hc.other;
    return add6;
}
float totalsavings(struct savings sav)
{
    float add7;
    add7 = sav.emefund + sav.invest + sav.other;
    return add7;

}
float total(float a,float b,float c,float d,float e,float f,float g)
{
    return (a+b+c+d+e+f+g);
}

int main()
{
    float inc;
    struct housing hs;
    struct food fo;
    struct transportation tr;
    struct education ed;
    struct family fam;
    struct healthcare hl;
    struct savings sav;
   
    // creating file for input
    FILE *fptr;
    fptr = fopen("budget_xout.txt", "w");

    if (fptr == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    // welcome statement
    printf("...WELCOME TO THE BUDGET CALCULATOR...\nby <team dot slash>\n");
    fprintf(fptr, "...WELCOME TO THE BUDGET CALCULATOR...\nby <team dot slash>\n");
    printf("Here you can easily calculate your monthly budget, total expenses, rest money and many more.\nSo let's start\n");
    fprintf(fptr, "Here you can easily calculate your monthly budget, total expenses, rest money and many more.\nSo let's start\n");
    
    // input for income
    printf("!DISCLIMER!"); 
    printf("First of all we need to know what is your monthly income?\n");
    fprintf(fptr, "First of all we need to know what is your monthly income?\n");
   
    scanf("%f", &inc);

    fprintf(fptr, "\nMonthly Income: %.2f\n", inc);
    // input for expenses
    printf("\nNow we have to know your expenses\n");

    printf("How much you spend in your Housing?\n1. Rent: ");
    scanf("%f", &hs.rent);
    printf("2. Maintenance: ");
    scanf("%f", &hs.maintenance);
    printf("3. Insurance: ");
    scanf("%f", &hs.insurance);
    printf("4. Utilities: ");
    scanf("%f", &hs.utilities);
    printf("5. Others: ");
    scanf("%f", &hs.other);
    fprintf(fptr, "\nNow we have to know your expenses.\n");
    fprintf(fptr, "How much you spend in your Housing?\n");
    fprintf(fptr, "1. Rent: %.2f\n2. Maintenance: %.2f\n3. Insurance: %.2f\n4. Utilities: %.2f\n5. Others: %.2f\n", hs.rent, hs.maintenance, hs.insurance, hs.utilities, hs.other);

    printf("\nHow much you spend in your Fooding?\n1. Groceries: ");
    scanf("%f", &fo.groceries);
    printf("2. Eating Out: ");
    scanf("%f", &fo.eatingout);
    printf("3. Other: ");
    scanf("%f", &fo.other);
    fprintf(fptr, "\nHow much you spend in your Fooding?\n");
    fprintf(fptr, "1. Groceries: %.2f\n2. Eating Out: %.2f\n3. Other: %.2f\n", fo.groceries, fo.eatingout, fo.other);

    printf("\nHow much you spend in your Transportation?\n1. Car Payment: ");
    scanf("%f", &tr.carpay);
    printf("2. Car Insurance: ");
    scanf("%f", &tr.ins);
    printf("3. Fuel: ");
    scanf("%f", &tr.fuel);
    printf("4. Maintenance: ");
    scanf("%f", &tr.maint);
    printf("5. Parking/Tolls: ");
    scanf("%f", &tr.parking);
    printf("6. Public Transportation: ");
    scanf("%f", &tr.pub);
    printf("7. Other: ");
    scanf("%f", &tr.other);
    fprintf(fptr, "\nHow much you spend in your Transportation?\n");
    fprintf(fptr, "1. Car Payment: %.2f\n2. Car Insurance: %.2f\n3. Fuel: %.2f\n4. Maintenance: %.2f\n5. Parking/Tolls: %.2f\n6. Public Transportation: %.2f\n7. Other: %.2f\n", tr.carpay, tr.ins, tr.fuel, tr.maint, tr.parking, tr.pub, tr.other);

    printf("\nHow much you spend in Education. \n1. College Fees: ");
    scanf("%f", &ed.collegefees);
    printf("2. Tution: ");
    scanf("%f", &ed.tuition);
    printf("3. Student Loan: ");
    scanf("%f", &ed.stloan);
    printf("4. Other: ");
    scanf("%f", &ed.other);
    fprintf(fptr, "\nHow much you spend in your Education?\n");
    fprintf(fptr, "1. College Fees: %.2f\n2. Tution: %.2f\n3. Student Loan: %.2f\n4. Other:%.2f\n", ed.collegefees, ed.tuition, ed.stloan, ed.other);

    printf("\nHow much you spend in your Family ?\n1. Mobile: ");
    scanf("%f", &fam.mobile);
    printf("2. Cloths: ");
    scanf("%f", &fam.cloth);
    printf("3. Entertainment: ");
    scanf("%f", &fam.entertainment);
    printf("4. Household: ");
    scanf("%f", &fam.household);
    printf("5. Family Care: ");
    scanf("%f", &fam.care);
    printf("6. Child: ");
    scanf("%f", &fam.child);
    printf("7. Vacation: ");
    scanf("%f", &fam.vacation);
    printf("8. Debt: ");
    scanf("%f", &fam.debt);
    printf("9. Other: ");
    scanf("%f", &fam.other);
    fprintf(fptr, "\nHow much you spend in your Family?\n");
    fprintf(fptr, "1. Mobile: %.2f\n2. Cloth: %.2f\n3. Entertainment: %.2f\n4. Household: %.2f\n5. Family Care: %.2f\n6. Child: %.2f\n7. Vacation: %.2f\n8. Debt: %.2f\n9. Others:%.2f\n", fam.mobile, fam.cloth, fam.entertainment, fam.household, fam.care, fam.child, fam.child, fam.vacation, fam.vacation, fam.debt, fam.other);

    printf("\nHow much you spend in your Hethcare?\n1. Medicine: ");
    scanf("%f", &hl.medicine);
    printf("2.Medical Insurance: ");
    scanf("%f", &hl.insu);
    printf("3. Other: ");
    scanf("%f", &hl.other);
    fprintf(fptr, "\nHow much you spend in your Heatlcare?\n");
    fprintf(fptr, "1. Medicine: %.2f\n2. Medical Insurance: %.2f\n3. Other: %.2f\n", hl.medicine, hl.insu, hl.other);

    printf("\nHow much you spend in your Savings?\n1. Emergency Fund: ");
    scanf("%f", &sav.emefund);
    printf("2. Investment: ");
    scanf("%f", &sav.invest);
    printf("3. Other: ");
    scanf("%f", &sav.other);
    fprintf(fptr, "\nHow much you spend in your Savings?\n");
    fprintf(fptr, "1. Emergency Fund: %.2f\n2. Investment: %.2f\n3. Other: %.2f\n", sav.emefund, sav.invest, sav.other);

    fclose(fptr);
    printf("Expenses have been saved to budget_xout.txt\n");


    //declearing variables
     float sum_housing,sum_food,sum_trans,sum_education,sum_family,sum_healthcare,sum_savings,sum_total;
     float per_housing,per_food,per_trans,per_education,per_family,per_healthcare,per_savings;
     float per_inc_housing,per_inc_food,per_inc_trans,per_inc_education,per_inc_family,per_inc_healthcare,per_inc_savings,Per_inc_total;
     char x ='%';

     
    // calling functions
    sum_housing = totalhousing(hs);
    sum_food = totalfood(fo);
    sum_trans = totaltransportation(tr);
    sum_education = totaledu(ed);
    sum_family = totalfamily(fam);
    sum_healthcare = totalhealth(hl);
    sum_savings =totalsavings(sav);
    sum_total = total(sum_housing,sum_food,sum_trans,sum_education,sum_family,sum_savings,sum_healthcare);


    //rest money
    float rest;
    rest = inc - sum_total;

    //expwnses percentage calculation

    per_housing=(sum_housing/sum_total)*100;
    per_food=(sum_food/sum_total)*100;
    per_trans=(sum_trans/sum_total)*100;
    per_education=(sum_education/sum_total)*100;
    per_family=(sum_family/sum_total)*100;
    per_healthcare=(sum_healthcare/sum_total)*100;
    per_savings=(sum_savings/sum_total)*100;



    
    //total income percentage
   
    per_inc_housing=(sum_housing/inc)*100;
    per_inc_food=(sum_food/inc)*100;
    per_inc_trans=(sum_trans/inc)*100;
    per_inc_education=(sum_education/inc)*100;
    per_inc_family=(sum_family/inc)*100;
    per_inc_healthcare=(sum_healthcare/inc)*100;
    Per_inc_total=(sum_total/inc)*100;
    per_inc_savings=(sum_savings/inc)*100;

//out put

    // printf("percentage of housing expenses: %.2f %c\n ",per_housing,x);
    // printf("percentage of food expenses: %.2f %c\n ",per_food,x);
    // printf("percentage of transportation expenses: %.2f %c\n ",per_trans,x);
    // printf("percentage of education expenses: %.2f %c\n ",per_education,x);
    // printf("percentage of family expenses: %.2f %c\n ",per_family,x);
    // printf("percentage of healthcare expenses: %.2f %c\n ",per_healthcare,x);
    // printf("percentage of savings expenses: %.2f %c\n ",per_savings,x);




    printf("Now we are ready to show your result\n");
    printf("Your total monthly expenses : %.2f",sum_total);
    printf("Your remaing money : %.2f",rest);
    printf("If you want too see your expenses result\nKindly inform us which result you are supposed to see\n");
    
    printf("To see your housing expenses press 1\n");
    printf("To see your food expenses press 2\n");
    printf("To see your transportation expenses 3\n");
    printf("To see your education expenses 4\n");
    printf("To see your family expenses 5\n");
    printf("To see your healthcare expenses 6\n");
    printf("To see your savings 7\n");
    printf("To see all 8\n");
    
    //switch case
    int num;
    printf("Enter the case number: ");
    scanf("%d",&num);
    switch (num)
    {
    case 1:
        printf("Total housing expenses: %.2f \n ",sum_housing);
        printf("Percentage of housing expenses depends on total expenses: %.2f %c\n ",per_housing,x);
        printf("Percentage of Housing expenses depends on your income: %.2f %c\n ",per_inc_housing,x);
        break;
    case 2:
        printf("total food expenses: %.2f %c\n ",sum_food,x);
        printf("percentage of food expenses depends on total expenses: %.2f %c\n ",per_food,x);
        printf("percentage of food expenses depends on your income: %.2f %c\n ",per_inc_food,x);
        break;
    case 3:
        printf("total Transportation expenses: %.2f %c\n ",sum_trans,x);
        printf("percentage of Transportation expenses depends on total expenses: %.2f %c\n ",per_trans,x);
        printf("percentage of Transportation expenses depends on your income: %.2f %c\n ",per_inc_trans,x);
        break;
    case 4:
        printf("total education expenses: %.2f %c\n ",sum_education,x);
        printf("percentage of education expenses depends on total expenses: %.2f %c\n ",per_education,x);
        printf("percentage of education expenses depends on your income: %.2f %c\n ",per_inc_education,x);
        break; 
    case 5:
        printf("total family expenses: %.2f %c\n ",sum_family,x);
        printf("percentage of family expenses depends on total expenses: %.2f %c\n ",per_family,x);
        printf("percentage of family expenses depends on your income: %.2f %c\n ",per_inc_family,x);
        break;
    case 6:
        printf("total healthcare expenses: %.2f %c\n ",sum_healthcare,x);
        printf("percentage of healthcare expenses depends on total expenses: %.2f %c\n ",per_healthcare,x);
        printf("percentage of healthcare expenses depends on your income: %.2f %c\n ",per_inc_healthcare,x);
        break;  
    case 7:
        printf("total savings expenses: %.2f %c\n ",sum_savings,x);
        printf("percentage of savings expenses depends on total expenses: %.2f %c\n ",per_savings,x);
        printf("percentage of savings expenses depends on your income: %.2f %c\n ",per_inc_savings,x);
        break;  
    case 8:
        printf("Total housing expenses: %.2f \n ",sum_housing);
        printf("Percentage of housing expenses depends on total expenses: %.2f %c\n ",per_housing,x);
        printf("Percentage of Housing expenses depends on your income: %.2f %c\n ",per_inc_housing,x);    
        printf("total food expenses: %.2f %c\n ",sum_food,x);
        printf("percentage of food expenses depends on total expenses: %.2f %c\n ",per_food,x);
        printf("percentage of food expenses depends on your income: %.2f %c\n ",per_inc_food,x);  
        printf("total Transportation expenses: %.2f %c\n ",sum_trans,x);
        printf("percentage of Transportation expenses depends on total expenses: %.2f %c\n ",per_trans,x);
        printf("percentage of Transportation expenses depends on your income: %.2f %c\n ",per_inc_trans,x); 
        printf("total education expenses: %.2f %c\n ",sum_education,x);
        printf("percentage of education expenses depends on total expenses: %.2f %c\n ",per_education,x);
        printf("percentage of education expenses depends on your income: %.2f %c\n ",per_inc_education,x);
        printf("total family expenses: %.2f %c\n ",sum_family,x);
        printf("percentage of family expenses depends on total expenses: %.2f %c\n ",per_family,x);
        printf("percentage of family expenses depends on your income: %.2f %c\n ",per_inc_family,x);
        printf("total healthcare expenses: %.2f %c\n ",sum_healthcare,x);
        printf("percentage of healthcare expenses depends on total expenses: %.2f %c\n ",per_healthcare,x);
        printf("percentage of healthcare expenses depends on your income: %.2f %c\n ",per_inc_healthcare,x);
        printf("total savings expenses: %.2f %c\n ",sum_savings,x);
        printf("percentage of savings expenses depends on total expenses: %.2f %c\n ",per_savings,x);
        printf("percentage of savings expenses depends on your income: %.2f %c\n ",per_inc_savings,x);
        break;  
    default:
        break;
    }

    return 0;
}