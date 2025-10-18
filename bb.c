#include <stdio.h>

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
    fptr = fopen("budget_out.txt", "w");

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
    printf("First of all we need to know what is your monthly income?\n");
    fprintf(fptr, "First of all we need to know what is your monthly income?\n");
    scanf("%.2f", &inc);

    fprintf(fptr, "\nMonthly Income: %f\n", inc);
    // input for expenses
    printf("\nNow we have to know your expenses\n");

    printf("How much you spend in your housing?\n1. Rent\n");
    scanf("%.2f", &hs.rent);
    printf("\n2. Maintenance \n");
    scanf("%.2f", &hs.maintenance);
    printf("\n3. Insurance\n");
    scanf("%.2f", &hs.insurance);
    printf("\n4. Utilities\n");
    scanf("%.2f", &hs.utilities);
    printf("\n5. Others\n");
    scanf("%.2f", &hs.other);
    fprintf(fptr, "\nNow we have to know your expenses.\n");
    fprintf(fptr, "How much you spend in your housing?\n");
    fprintf(fptr, "\n1. Rent: %f\n2. Maintenance: %f\n3. Insurance: %f\n4. Utilities: %f\n5. Others: %f\n", hs.rent, hs.maintenance, hs.insurance, hs.utilities, hs.other);

    printf("\nHow much you spend in your Fooding?\n1. Groceries\n");
    scanf("%f", &fo.groceries);
    printf("\n2. Eating out \n");
    scanf("%f", &fo.eatingout);
    printf("\n3. Other\n");
    scanf("%f", &fo.other);
    fprintf(fptr, "\nHow much you spend in your Fooding?\n");
    fprintf(fptr, "\n1. Groceries: %f\n2. Eating out: %f\n3. Other: %.2f\n", fo.groceries, fo.eatingout, fo.other);

    printf("\nHow much you spend in your Transportation?\n1. Car Payment\n");
    scanf("%.2f", &tr.carpay);
    printf("\n2. Car Insurance \n");
    scanf("%.2f", &tr.ins);
    printf("\n3. Fuel\n");
    scanf("%.2f", &tr.fuel);
    printf("\n4. Maintenance\n");
    scanf("%.2f", &tr.maint);
    printf("\n5. Parking/Tolls\n");
    scanf("%.2f", &tr.parking);
    printf("\n6. Public Transportation\n");
    scanf("%.2f", &tr.pub);
    printf("\n7. Other\n");
    scanf("%.2f", &tr.other);
    fprintf(fptr, "\nHow much you spend in your Transportation?\n");
    fprintf(fptr, "\n1. Car Payment: %.2f\n2. Car Insurance: %.2f\n3. Fuel: %.2f\n4. Maintenance: %.2f\n5. Parking/Tolls: %.2f\n6. Public Transportation: %.2f\n7. Other: %.2f\n", tr.carpay, tr.ins, tr.fuel, tr.maint, tr.parking, tr.pub, tr.other);

    printf("\n how much you spend in education \n1. collegefees\n ");
    scanf("%.2f", &ed.collegefees);
    printf("\n2. tution\n");
    scanf("%.2f", &ed.tuition);
    printf("\n3. stloan\n");
    scanf("%.2f", &ed.stloan);
    printf("\n4. other\n");
    scanf("%.2f", &ed.other);
    fprintf(fptr, "\nHow much you spend in your education?\n");
    fprintf(fptr, "\n1. College Fees: %.2f :: 2. Tution: %.2f3. Studentloan: %.2f :: 4. other:%.2f ::", ed.collegefees, ed.tuition, ed.stloan, ed.other);

    printf("\nHow much you spend in your family ?\n1. mobile\n");
    scanf("%.2f", &fam.mobile);
    printf("\n2. cloths\n");
    scanf("%.2f", &fam.cloth);
    printf("\n3. entertainment\n");
    scanf("%.2f", &fam.entertainment);
    printf("\n4. householld\n");
    scanf("%.2f", &fam.household);
    printf("\n5. care\n");
    scanf("%.2f", &fam.care);
    printf("\n6. child\n");
    scanf("%.2f", &fam.child);
    printf("\n7. vacation\n");
    scanf("%.2f", &fam.vacation);
    printf("\n8. debt\n");
    scanf("%.2f", &fam.debt);
    printf("\n9. Other\n");
    scanf("%.2f", &fam.other);
    fprintf(fptr, "\nHow much you spend in your Family?\n");
    fprintf(fptr, "\n1. mobile: %.2f\n2. cloth: %.2f\n3. Entertainment: %.2f\n4. household: %.2f\n5. care: %.2f\n6.child: %.2f\n7. vacation: %.2f\n8. Debt: %.2f\n9. others:%.2f\n", fam.mobile, fam.cloth, fam.entertainment, fam.household, fam.care, fam.child, fam.child, fam.vacation, fam.vacation, fam.debt, fam.other);

    printf("\nHow much you spend in your hethcare?\n1. medicine\n");
    scanf("%.2f", &hl.medicine);
    printf("\n2.insu \n");
    scanf("%.2f", &hl.insu);
    printf("\n3. Other\n");
    scanf("%.2f", &hl.other);
    fprintf(fptr, "\nHow much you spend in your heatlcare?\n");
    fprintf(fptr, "\n1. medicine: %.2f\n2. Insu: %.2f\n3. Other: %.2f\n", hl.medicine, hl.insu, hl.other);

    printf("\nHow much you spend in your savings?\n1. emefund\n");
    scanf("%.2f", &sav.emefund);
    printf("\n2. invest \n");
    scanf("%.2f", &sav.invest);
    printf("\n3. Other\n");
    scanf("%.2f", &sav.other);
    fprintf(fptr, "\nHow much you spend in your savings?\n");
    fprintf(fptr, "\n1. Emefund: %.2f\n2. Invest: %.2f\n3. Other: %.2f\n", sav.emefund, sav.invest, sav.other);

    fclose(fptr);
    printf("Expenses have been saved to budget_out.txt\n");


    //declearing variables
     float sum_housing,sum_food,sum_trans,sum_education,sum_family,sum_healthcare,sum_savings,sum_total;
     float per_housing,per_food,per_trans,per_education,per_family,per_healthcare,per_savings;
     float per_inc_housing,per_inc_food,per_inc_trans,per_inc_education,per_inc_family,per_inc_healthcare,per_inc_savings,Per_inc_total;
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
    int rest;
    rest = inc-sum_total;

    //percentage calculation

    per_housing=(sum_housing/sum_total)*100;
    per_food=(sum_food/sum_total)*100;
    per_trans=(sum_trans/sum_total)*100;
    per_education=(sum_education/sum_total)*100;
    per_family=(sum_family/sum_total)*100;
    per_healthcare=(sum_healthcare/sum_total)*100;
    per_savings=(sum_savings/sum_total)*100;

   
    per_inc_housing=(sum_housing/inc)*100;
    per_inc_food=(sum_food/inc)*100;
    per_inc_trans=(sum_trans/inc)*100;
    per_inc_education=(sum_education/inc)*100;
    per_inc_family=(sum_family/inc)*100;
    per_inc_healthcare=(sum_healthcare/inc)*100;
    per_inc_savings=(sum_savings/inc)*100;
    Per_inc_total=(sum_total/inc)*100;

    return 0;
}