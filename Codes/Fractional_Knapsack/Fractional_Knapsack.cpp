//Name: Md Rashad Tanjim | ID: 1620952042 | Subject: CSE373.1 | Faculty: SFM1 | Assignment - 01 

/*You are required to implement the fractional knapsack problem using a programming language
of your own choice. You are going to take the number of items, their weights , volume and costs
from the user as well as the knapsack capacity and determine the maximum value that can be
taken. Also print out the items and its quantities that can be taken*/

#include<iostream>
using namespace std;

int main()
{
    int array[2][100], items, weights, i, left, weight_used[100], maximum_value  = -1, totalprofit = 0;

    //give input number of items
    cout << "Enter number of items: ";
    cin >> items;

    //give input max weight of knapsacka
    cout << "\nEnter the weight of the knapsack: ";
    cin >> weights;

    /* Array's first row is to store weights second row is to store profits */
    cout << "\nweight--profit\n";
    for (i = 0; i < items; i++)
    {
        cin >> array[0][i] >> array[1][i];
    }

    for (i = 0; i < items; i++)
    {
        weight_used[i] = 0;
    }
    left = weights;

    //loop until knapsack is full
    while (left >= 0)
    {
        maximum_value = -1;
        //loop to find max profit items
        for (i = 0; i < items; i++)
        {
            if ((weight_used[i] == 0) && ((maximum_value == -1) || (((float) array[1][i]
                                                    / (float) array[0][i]) > ((float) array[1][maximum_value]
                                                            / (float) array[0][maximum_value]))))
            {
                maximum_value = i;
            }
        }
        weight_used[maximum_value] = 1;

        //decrease current wight
        left -= array[0][maximum_value];

        //increase total profit
        totalprofit += array[1][maximum_value];

        if (left >= 0)
        {
            cout << "\nItems " << maximum_value + 1 << " Weight: "
                 << array[0][maximum_value] << " and Profit: " << array[1][maximum_value]
                 << " and, weight left: " << left;
        }
        else
        {
            cout << "\nItems " << maximum_value + 1 << " Weight: "
                 << (array[0][maximum_value] + left) << " and Profit: "
                 << (array[1][maximum_value] / array[0][maximum_value]) * (array[0][maximum_value]
                         + left) << " and weight is filled!"
                 << " so fractional Weight added is: " << left + array[0][maximum_value];
            totalprofit -= array[1][maximum_value];
            totalprofit += ((array[1][maximum_value] / array[0][maximum_value]) * (array[0][maximum_value]
                        + left));
        }
    }
    //print total worth of items filled in knapsack
    cout << "\n\nMaximum value can be taken: " << totalprofit;
    cout << "\n";
    return 0;

}
