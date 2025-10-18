//MONTHLY BUDGET CALCULATOR
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
float total(float a, float b, float c, float d, float e, float f, float g)
{
    return (a + b + c + d + e + f + g);
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

    // creating 1st file for input
    // creating first file
    FILE *fptr;
    fptr = fopen("budget_aout.txt", "w");

    if (fptr == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    FILE *fexpenses = fopen("budget_cout.txt", "w");
    if (fexpenses == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    FILE *fnew = fopen("budget_dout.text", "w");
    if (fnew == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    // welcome statement
    printf("...WELCOME TO THE BUDGET CALCULATOR...\nBy <team dot slash>.\n");
    fprintf(fptr, "...WELCOME TO THE BUDGET CALCULATOR...\nBy <team dot slash>.\n");
    fprintf(fexpenses, "...WELCOME TO THE BUDGET CALCULATOR...\nBy <team dot slash>.\n");
    fprintf(fnew, "...WELCOME TO THE BUDGET CALCULATOR...\nby <team dot slash>\n");
    printf("Here you can easily compute your monthly budget, total costs, leftover funds, and many other things.\nSo let's start...\n");
    fprintf(fptr, "Here you can easily compute your monthly budget, total costs, leftover funds, and many other things.\nSo let's start...\n");
    fprintf(fexpenses, "Here you can easily compute your monthly budget, total costs, leftover funds, and many other things.\nSo let's start...\n");
    fprintf(fnew, "Here you can easily compute your monthly budget, total costs, leftover funds, and many other things.\nSo let's start...\n");
    // input for income
    printf("!DISCLAIMER: We are going to calculate everything in rupees ('Rs.')!\n");
    printf("Initially, we would like to know how much money you make monthly.\n Rs. ");
    fprintf(fptr, "Initially, we would like to know how much money you make monthly.\n");
    fprintf(fexpenses, "Initially, we would like to know how much money you make monthly.\n");
    fprintf(fnew, "Initially, we would like to know how much money you make monthly.\n");
    scanf("%f", &inc);

    fprintf(fptr, "\nMonthly Income: Rs. %.2f\n", inc);
    fprintf(fexpenses, "\nMonthly Income: Rs. %.2f\n", inc);
    fprintf(fnew, "\nMonthly Income: Rs. %.2f\n", inc);
    // input for expenses
    printf("\nNow we want know what your expenses are.\n");

    printf("How much you spend in your Housing ?\n1. Rent: Rs. ");
    scanf("%f", &hs.rent);
    printf("2. Maintenance: Rs. ");
    scanf("%f", &hs.maintenance);
    printf("3. Insurance: Rs. ");
    scanf("%f", &hs.insurance);
    printf("4. Utilities: Rs. ");
    scanf("%f", &hs.utilities);
    printf("5. Others: Rs. ");
    scanf("%f", &hs.other);
    fprintf(fptr, "\nNow we want know what your expenses are.\n");
    fprintf(fptr, "How much you spend in your Housing ?\n");
    fprintf(fptr, "1. Rent: Rs. %.2f\n2. Maintenance: Rs. %.2f\n3. Insurance: Rs. %.2f\n4. Utilities: Rs. %.2f\n5. Others: Rs. %.2f\n", hs.rent, hs.maintenance, hs.insurance, hs.utilities, hs.other);

    printf("\nHow much you spend in your Fooding ?\n1. Groceries: Rs. ");
    scanf("%f", &fo.groceries);
    printf("2. Eating Out: Rs. ");
    scanf("%f", &fo.eatingout);
    printf("3. Other: Rs. ");
    scanf("%f", &fo.other);
    fprintf(fptr, "\nHow much you spend in your Fooding ?\n");
    fprintf(fptr, "1. Groceries: Rs. %.2f\n2. Eating Out: Rs. %.2f\n3. Other: Rs. %.2f\n", fo.groceries, fo.eatingout, fo.other);

    printf("\nHow much you spend in your Transportation ?\n1. Car Payment: Rs. ");
    scanf("%f", &tr.carpay);
    printf("2. Car Insurance: Rs. ");
    scanf("%f", &tr.ins);
    printf("3. Fuel: Rs. ");
    scanf("%f", &tr.fuel);
    printf("4. Maintenance: Rs. ");
    scanf("%f", &tr.maint);
    printf("5. Parking/Tolls: Rs. ");
    scanf("%f", &tr.parking);
    printf("6. Public Transportation: Rs. ");
    scanf("%f", &tr.pub);
    printf("7. Other: Rs. ");
    scanf("%f", &tr.other);
    fprintf(fptr, "\nHow much you spend in your Transportation ?\n");
    fprintf(fptr, "1. Car Payment: Rs. %.2f\n2. Car Insurance: Rs. %.2f\n3. Fuel: Rs. %.2f\n4. Maintenance: Rs. %.2f\n5. Parking/Tolls: Rs. %.2f\n6. Public Transportation: Rs. %.2f\n7. Other: Rs. %.2f\n", tr.carpay, tr.ins, tr.fuel, tr.maint, tr.parking, tr.pub, tr.other);

    printf("\nHow much you spend in Education ? \n1. College Fees: Rs. ");
    scanf("%f", &ed.collegefees);
    printf("2. Tution: Rs. ");
    scanf("%f", &ed.tuition);
    printf("3. Student Loan: Rs. ");
    scanf("%f", &ed.stloan);
    printf("4. Other: Rs. ");
    scanf("%f", &ed.other);
    fprintf(fptr, "\nHow much you spend in your Education ?\n");
    fprintf(fptr, "1. College Fees: Rs. %.2f\n2. Tution: Rs. %.2f\n3. Student Loan: Rs. %.2f\n4. Other: Rs. %.2f\n", ed.collegefees, ed.tuition, ed.stloan, ed.other);

    printf("\nHow much you spend in your Family ?\n1. Mobile: Rs. ");
    scanf("%f", &fam.mobile);
    printf("2. Cloths: Rs. ");
    scanf("%f", &fam.cloth);
    printf("3. Entertainment: Rs. ");
    scanf("%f", &fam.entertainment);
    printf("4. Household: Rs. ");
    scanf("%f", &fam.household);
    printf("5. Family Care: Rs. ");
    scanf("%f", &fam.care);
    printf("6. Child: Rs. ");
    scanf("%f", &fam.child);
    printf("7. Vacation: Rs. ");
    scanf("%f", &fam.vacation);
    printf("8. Debt: Rs. ");
    scanf("%f", &fam.debt);
    printf("9. Other: Rs. ");
    scanf("%f", &fam.other);
    fprintf(fptr, "\nHow much you spend in your Family ?\n");
    fprintf(fptr, "1. Mobile: Rs. %.2f\n2. Cloth: Rs. %.2f\n3. Entertainment: Rs. %.2f\n4. Household: Rs. %.2f\n5. Family Care: Rs. %.2f\n6. Child: Rs. %.2f\n7. Vacation: Rs. %.2f\n8. Debt: Rs. %.2f\n9. Others: Rs. %.2f\n", fam.mobile, fam.cloth, fam.entertainment, fam.household, fam.care, fam.child, fam.child, fam.vacation, fam.vacation, fam.debt, fam.other);

    printf("\nHow much you spend in your Healthcare ?\n1. Medicine: Rs. ");
    scanf("%f", &hl.medicine);
    printf("2. Medical Insurance: Rs. ");
    scanf("%f", &hl.insu);
    printf("3. Other: Rs. ");
    scanf("%f", &hl.other);
    fprintf(fptr, "\nHow much you spend in your Heatlcare ?\n");
    fprintf(fptr, "1. Medicine: Rs. %.2f\n2. Medical Insurance: Rs. %.2f\n3. Other: Rs. %.2f\n", hl.medicine, hl.insu, hl.other);

    printf("\nHow much you spend in your Savings ?\n1. Emergency Fund: Rs. ");
    scanf("%f", &sav.emefund);
    printf("2. Investment: Rs. ");
    scanf("%f", &sav.invest);
    printf("3. Other: Rs. ");
    scanf("%f", &sav.other);
    fprintf(fptr, "\nHow much you spend in your Savings ?\n");
    fprintf(fptr, "1. Emergency Fund: Rs. %.2f\n2. Investment: Rs. %.2f\n3. Other: Rs. %.2f\n", sav.emefund, sav.invest, sav.other);

    // declearing variables
    float sum_housing, sum_food, sum_trans, sum_education, sum_family, sum_healthcare, sum_savings, sum_total;
    float per_housing, per_food, per_trans, per_education, per_family, per_healthcare, per_savings;
    float per_inc_housing, per_inc_food, per_inc_trans, per_inc_education, per_inc_family, per_inc_healthcare, per_inc_savings, Per_inc_total;
    char x = '%';
    // calling functions
    sum_housing = totalhousing(hs);

    sum_food = totalfood(fo);

    sum_trans = totaltransportation(tr);

    sum_education = totaledu(ed);

    sum_family = totalfamily(fam);

    sum_healthcare = totalhealth(hl);

    sum_savings = totalsavings(sav);

    sum_total = total(sum_housing, sum_food, sum_trans, sum_education, sum_family, sum_savings, sum_healthcare);

    // rest money
    float rest;
    rest = inc - sum_total;

    // expwnses percentage calculation

    per_housing = (sum_housing / sum_total) * 100;

    per_food = (sum_food / sum_total) * 100;

    per_trans = (sum_trans / sum_total) * 100;

    per_education = (sum_education / sum_total) * 100;

    per_family = (sum_family / sum_total) * 100;

    per_healthcare = (sum_healthcare / sum_total) * 100;

    per_savings = (sum_savings / sum_total) * 100;

    // total income percentage

    per_inc_housing = (sum_housing / inc) * 100;

    per_inc_food = (sum_food / inc) * 100;

    per_inc_trans = (sum_trans / inc) * 100;

    per_inc_education = (sum_education / inc) * 100;

    per_inc_family = (sum_family / inc) * 100;

    per_inc_healthcare = (sum_healthcare / inc) * 100;

    Per_inc_total = (sum_total / inc) * 100;
    per_inc_savings = (sum_savings / inc) * 100;

    // input in second file
    fprintf(fexpenses, "Your Total Monthly Expenses : Rs. %.2f\n", sum_total);

    fprintf(fexpenses, "Total Housing Expenses: Rs. %.2f\n ", sum_housing);
    fprintf(fexpenses, "Percentage of Housing expenses depends on your total expenses: Rs. %.2f %c\n ", per_housing, x);
    fprintf(fexpenses, "Percentage of Housing expenses depends on your income: Rs. %.2f %c\n ", per_inc_housing, x);

    fprintf(fexpenses, "Total Food Expenses: Rs. %.2f\n ", sum_food);
    fprintf(fexpenses, "percentage of food expenses depends on total expenses: Rs. %.2f %c\n ", per_food, x);
    fprintf(fexpenses, "percentage of food expenses depends on your income: Rs. %.2f %c\n ", per_inc_food, x);

    fprintf(fexpenses, "Total Transportation Expenses: Rs. %.2f\n ", sum_trans);
    fprintf(fexpenses, "percentage of Transportation expenses depends on total expenses: Rs. %.2f %c\n ", per_trans, x);
    fprintf(fexpenses, "percentage of Transportation expenses depends on your income: Rs. %.2f %c\n ", per_inc_trans, x);

    fprintf(fexpenses, "Total Education Expenses: Rs. %.2f\n ", sum_education);
    fprintf(fexpenses, "percentage of education expenses depends on total expenses: Rs. %.2f %c\n ", per_education, x);
    fprintf(fexpenses, "percentage of education expenses depends on your income: Rs. %.2f %c\n ", per_inc_education, x);

    fprintf(fexpenses, "Total Family Expenses: Rs. %.2f\n ", sum_family);
    fprintf(fexpenses, "percentage of family expenses depends on total expenses: Rs. %.2f %c\n ", per_family, x);
    fprintf(fexpenses, "percentage of family expenses depends on your income: Rs. %.2f %c\n ", per_inc_family, x);

    fprintf(fexpenses, "Total Healthcare Expenses: Rs. %.2f\n ", sum_healthcare);
    fprintf(fexpenses, "percentage of healthcare expenses depends on total expenses: Rs. %.2f %c\n ", per_healthcare, x);
    fprintf(fexpenses, "percentage of healthcare expenses depends on your income: Rs. %.2f %c\n ", per_inc_healthcare, x);

    fprintf(fexpenses, "Total Savings Expenses: Rs. %.2f\n ", sum_savings);
    fprintf(fexpenses, "percentage of savings expenses depends on total expenses: Rs. %.2f %c\n ", per_savings, x);
    fprintf(fexpenses, "percentage of savings expenses depends on your income: Rs. %.2f %c\n ", per_inc_savings, x);

    // closing 2nd file

    // out put

    // creating 3rd file

    printf("\nNow we are ready to show you result.\n");
    fprintf(fnew, "\nNow we are ready to show you result.\n");

    printf("Your Total Monthly Expenses : Rs. %.2f\n", sum_total);
    fprintf(fnew, "\nYour Total Monthly Expenses : Rs.%.2f\n", sum_total);

    if (rest > 0)
    {
        printf("Your Remaing Money : Rs. %.2f\n", rest);
        fprintf(fnew, "Your Remaing Money : Rs. %.2f\n", rest);
        printf("Your overall spending does not exceed your revenue.");
        fprintf(fnew, "Your overall spending does not exceed your revenue.");
    }
    else if (rest < 0)
    {
        printf("Your Remaing Money : Rs. 0\nYou are behind of Rs. %.2f from your Income\n", rest * -1);
        fprintf(fnew, "Your Remaing Money : Rs. 0\nYou are behind of Rs. %.2f from your Income\n", rest * -1);
        printf("Your overall expenses exceed your income. You should take care of it as quickly as possible.");
        fprintf(fnew, "Your overall expenses exceed your income. You should take care of it as quickly as possible.");
    }
    else
    {
        printf("Your Remaing Money : Rs. 0\nYou are behind of %.2f from your Income\n", rest);
        fprintf(fnew, "Your Remaing Money : Rs. 0\nYou are behind of %.2f from your Income\n", rest);
        printf("Your entire expenses and your income are the same.You ought to take care of it.");
        fprintf(fnew, "Your entire expenses and your income are the same.You ought to take care of it.");
    }

    printf("\nNow, if you would want to view your specific spending result, please let us know which result you should see.\n");
    fprintf(fnew, "\nNow, if you would want to view your specific spending result, please let us know which result you should see.\n");

    printf("To see your housing expenses press 1\n");
    printf("To see your food expenses press 2\n");
    printf("To see your transportation expenses press 3\n");
    printf("To see your education expenses press 4\n");
    printf("To see your family expenses press 5\n");
    printf("To see your healthcare expenses press 6\n");
    printf("To see your savings press 7\n");
    printf("To see all press 8\n");

    fprintf(fnew, "To see your housing expenses press 1\n");
    fprintf(fnew, "To see your food expenses press 2\n");
    fprintf(fnew, "To see your transportation expenses press 3\n");
    fprintf(fnew, "To see your education expenses press 4\n");
    fprintf(fnew, "To see your family expenses press 5\n");
    fprintf(fnew, "To see your healthcare expenses press 6\n");
    fprintf(fnew, "To see your savings press 7\n");
    fprintf(fnew, "To see all press 8\n");

    // switch case
    int num;
ab:
    printf("\nEnter the case number: \n");
    scanf("%d", &num);
    fprintf(fnew, "\nEnter the case number: %d\n", num);
    switch (num)
    {
    case 1:
        printf("Total Housing Expenses: Rs. %.2f \n ", sum_housing);
        fprintf(fnew, "Total Housing Expenses: Rs. %.2f \n ", sum_housing);
        printf("Percentage of housing expenses depends on total expenses: %.2f %c\n ", per_housing, x);
        fprintf(fnew, "Percentage of housing expenses depends on total expenses: %.2f %c\n ", per_housing, x);
        printf("Percentage of Housing expenses depends on your income: %.2f %c\n ", per_inc_housing, x);
        fprintf(fnew, "Percentage of Housing expenses depends on your income: %.2f %c\n ", per_inc_housing, x);
        break;
    case 2:
        printf("Total Food Expenses: Rs. %.2f\n ", sum_food);
        fprintf(fnew, "Total Food Expenses: Rs. %.2f\n ", sum_food);
        printf("Percentage of food expenses depends on total expenses: %.2f %c\n ", per_food, x);
        fprintf(fnew, "Percentage of food expenses depends on total expenses: %.2f %c\n ", per_food, x);
        printf("Percentage of food expenses depends on your income: %.2f %c\n ", per_inc_food, x);
        fprintf(fnew, "Percentage of food expenses depends on your income: %.2f %c\n ", per_inc_food, x);
        break;
    case 3:
        printf("Total Transportation Expenses: Rs. %.2f\n ", sum_trans);
        fprintf(fnew, "Total Transportation Expenses: Rs. %.2f\n ", sum_trans);
        printf("Percentage of Transportation expenses depends on total expenses: %.2f %c\n ", per_trans, x);
        fprintf(fnew, "Percentage of Transportation expenses depends on total expenses: %.2f %c\n ", per_trans, x);
        printf("Percentage of Transportation expenses depends on your income: %.2f %c\n ", per_inc_trans, x);
        fprintf(fnew, "Percentage of Transportation expenses depends on your income: %.2f %c\n ", per_inc_trans, x);
        break;
    case 4:
        printf("Total Education Expenses: Rs. %.2f\n ", sum_education);
        fprintf(fnew, "Total Education Expenses: Rs. %.2f\n ", sum_education);
        printf("Percentage of education expenses depends on total expenses: %.2f %c\n ", per_education, x);
        fprintf(fnew, "Percentage of education expenses depends on total expenses: %.2f %c\n ", per_education, x);
        printf("Percentage of education expenses depends on your income: %.2f %c\n ", per_inc_education, x);
        fprintf(fnew, "Percentage of education expenses depends on your income: %.2f %c\n ", per_inc_education, x

        );
        break;
    case 5:
        printf("Total Family Expenses: Rs. %.2f\n ", sum_family);
        fprintf(fnew, "Total Family Expenses: Rs. %.2f\n ", sum_family);
        printf("Percentage of family expenses depends on total expenses: %.2f %c\n ", per_family, x);
        fprintf(fnew, "Percentage of family expenses depends on total expenses: %.2f %c\n ", per_family, x);
        printf("Percentage of family expenses depends on your income: %.2f %c\n ", per_inc_family, x);
        fprintf(fnew, "Percentage of family expenses depends on your income: %.2f %c\n ", per_inc_family, x);
        break;
    case 6:
        printf("Total Healthcare Expenses: Rs. %.2f\n ", sum_healthcare);
        fprintf(fnew, "Total Healthcare Expenses: Rs. %.2f\n ", sum_healthcare);
        printf("Percentage of healthcare expenses depends on total expenses: %.2f %c\n ", per_healthcare, x);
        fprintf(fnew, "Percentage of healthcare expenses depends on total expenses: %.2f %c\n ", per_healthcare, x);
        printf("Percentage of healthcare expenses depends on your income: %.2f %c\n ", per_inc_healthcare, x);
        fprintf(fnew, "Percentage of healthcare expenses depends on your income: %.2f %c\n ", per_inc_healthcare, x);
        break;
    case 7:
        printf("Total Savings Expenses: Rs. %.2f\n ", sum_savings);
        fprintf(fnew, "Total Savings Expenses: Rs. %.2f\n ", sum_savings);
        printf("Percentage of savings expenses depends on total expenses: %.2f %c\n ", per_savings, x);
        fprintf(fnew, "Percentage of savings expenses depends on total expenses: %.2f %c\n ", per_savings, x);
        printf("Percentage of savings expenses depends on your income: %.2f %c\n ", per_inc_savings, x);
        fprintf(fnew, "Percentage of savings expenses depends on your income: %.2f %c\n ", per_inc_savings, x);
        break;
    case 8:
        printf("\nTotal Housing Expenses: Rs. %.2f\n ", sum_housing);
        fprintf(fnew, "Total Housing Expenses: Rs. %.2f\n ", sum_housing);
        printf("Percentage of housing expenses depends on total expenses: %.2f %c\n ", per_housing, x);
        fprintf(fnew, "Percentage of housing expenses depends on total expenses: %.2f %c\n ", per_housing, x);
        printf("Percentage of Housing expenses depends on your income: %.2f %c\n ", per_inc_housing, x);
        fprintf(fnew, "Percentage of Housing expenses depends on your income: %.2f %c\n ", per_inc_housing, x);

        printf("Total Food Expenses: Rs. %.2f\n ", sum_food);
        fprintf(fnew, "Total Food Expenses: Rs. %.2f \n ", sum_food);
        printf("Percentage of food expenses depends on total expenses: %.2f %c\n ", per_food, x);
        fprintf(fnew, "Percentage of food expenses depends on total expenses: %.2f %c\n ", per_food, x);
        printf("Percentage of food expenses depends on your income: %.2f %c\n ", per_inc_food, x);
        fprintf(fnew, "Percentage of food expenses depends on your income: %.2f %c\n ", per_inc_food, x);

        printf("Total Transportation Expenses: Rs. %.2f\n ", sum_trans);
        fprintf(fnew, "Total Transportation Expenses: Rs. %.2f\n ", sum_trans);
        printf("Percentage of Transportation expenses depends on total expenses: %.2f %c\n ", per_trans, x);
        fprintf(fnew, "Percentage of Transportation expenses depends on total expenses: %.2f %c\n ", per_trans, x);
        printf("Percentage of Transportation expenses depends on your income: %.2f %c\n ", per_inc_trans, x);
        fprintf(fnew, "Percentage of Transportation expenses depends on your income: %.2f %c\n ", per_inc_trans, x);

        printf("Total Education Expenses: Rs. %.2f\n ", sum_education);
        printf("Percentage of education expenses depends on total expenses: %.2f %c\n ", per_education, x);
        printf("Percentage of education expenses depends on your income: %.2f %c\n ", per_inc_education, x);
        fprintf(fnew, "Total Education Expenses: Rs. %.2f\n ", sum_education);
        fprintf(fnew, "Percentage of education expenses depends on total expenses: %.2f %c\n ", per_education, x);
        fprintf(fnew, "Percentage of education expenses depends on your income: %.2f %c\n ", per_inc_education, x);

        printf("Total Family Expenses: Rs. %.2f\n ", sum_family);
        printf("Percentage of family expenses depends on total expenses: %.2f %c\n ", per_family, x);
        printf("Percentage of family expenses depends on your income: %.2f %c\n ", per_inc_family, x);
        fprintf(fnew, "Total Family Expenses: Rs. %.2f\n ", sum_family);
        fprintf(fnew, "Percentage of family expenses depends on total expenses: %.2f %c\n ", per_family, x);
        fprintf(fnew, "Percentage of family expenses depends on your income: %.2f %c\n ", per_inc_family, x);

        printf("Total Healthcare Expenses: Rs. %.2f\n ", sum_healthcare);
        fprintf(fnew, "Total Healthcare Expenses: %.2f\n ", sum_healthcare);
        printf("Percentage of healthcare expenses depends on total expenses: %.2f %c\n ", per_healthcare, x);
        fprintf(fnew, "Percentage of healthcare expenses depends on total expenses: %.2f %c\n ", per_healthcare, x);
        printf("Percentage of healthcare expenses depends on your income: %.2f %c\n ", per_inc_healthcare, x);
        fprintf(fnew, "Percentage of healthcare expenses depends on your income: %.2f %c\n ", per_inc_healthcare, x);

        printf("Total Savings: Rs. %.2f\n ", sum_savings);
        fprintf(fnew, "Total Savings: Rs. %.2f\n ", sum_savings);
        printf("Percentage of savings depends on total expenses: %.2f %c\n ", per_savings, x);
        fprintf(fnew, "Percentage of savings depends on total expenses: %.2f %c\n ", per_savings, x);
        printf("Percentage of savings depends on your income: %.2f %c\n ", per_inc_savings, x);
        fprintf(fnew, "Percentage of savings depends on your income: %.2f %c\n ", per_inc_savings, x);
        break;
    default:
        printf("Invaild case number.Try again!!!\n");
        fprintf(fnew, "Invaild case number.Try again!!!\n");
        goto ab;
        break;
    }

    printf("\n\nREGARDS FROM <team dot slash>.\nTHANK YOU FOR USING OUR CALCULATOR.\nVISIT AGAIN.");
    fprintf(fexpenses, "\n\nREGARDS FROM <team dot slash>.\nTHANK YOU FOR USING OUR CALCULATOR.\nVISIT AGAIN.");
    fprintf(fnew, "\n\nREGARDS FROM <team dot slash>.\nTHANK YOU FOR USING OUR CALCULATOR.\nVISIT AGAIN.");
    // closing all files
    fclose(fptr);
    fclose(fexpenses);
    fclose(fnew);
    return 0;
    // closing
}