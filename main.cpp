#include <iostream>
#include <algorithm> //for min(), max() functions
#include <vector> //for crisp values and rule vectors
#include <Max.h>
#include <Min.h>
using namespace std;

float average(float, float);
float average(float, float, float);

int main()
{
    cout << "****The Apartment Price Calculator****" << endl << endl << endl;

    string fuzzyview, fuzzybed, fuzzytrans, fuzzyfac;
    float fuzzysize;

    //user enters details of apartment
    cout << "Please enter the View: " << endl;
    cin >> fuzzyview;
    cout << "Please enter the Size (in square feet): " << endl;
    cin >> fuzzysize;
    cout << "Please enter the Number of Bedrooms: " << endl;
    cin >> fuzzybed;
    cout << "Please enter the Transportation Access: " << endl;
    cin >> fuzzytrans;
    cout << "Please enter the Facilities:" << endl;
    cin >> fuzzyfac;

    //code for creating tables, populating them

    float sizetable[13][5] = {{0, 0, 0, 0, 0}, {250, 0.5, 0, 0, 0}, {500, 1, 0, 0, 0}, {750, 1, 0.5, 0, 0}, {1000, 1, 1, 0, 0}, \
    {1250, 0.5, 1, 0.5, 0}, {1500, 0, 1, 1, 0}, {1750, 0, 0.5, 1, 0}, {2000, 0, 0, 1, 0}, {2250, 0, 0, 0.5, 0.5}, {2500, 0, 0, 0, 1}, \
    {2750, 0, 0, 0, 1}, {3000, 0, 0, 0, 1}};

    //code for membership attributes (aka fuzzification)
    cout << endl << endl << "fuzzifying..." << endl << endl << endl;

    //view
    float mstreet, mmarina, msea;
    if(fuzzyview == "street")
    {
        mstreet = 1;
        mmarina = 0;
        msea = 0;
    }
    else if(fuzzyview == "marina")
    {
        mstreet = 0;
        mmarina = 1;
        msea = 0;
    }
    else if(fuzzyview == "sea")
    {
        mstreet = 0;
        mmarina = 0;
        msea = 1;
    }

    //size
    float msmall, mmoderate, mspacious, mlarge;
    for (int i = 0; i < 13; i++)
    {
        if(fuzzysize == sizetable[i][0])
        {
            msmall = sizetable[i][1];
            mmoderate = sizetable[i][2];
            mspacious = sizetable[i][3];
            mlarge = sizetable[i][4];
        }
        else
        {
            if(fuzzysize > 0 && fuzzysize < 250)
            {
                msmall = average(sizetable[0][1], sizetable[1][1]);
                mmoderate = average(sizetable[0][2], sizetable[1][2]);
                mspacious = average(sizetable[0][3], sizetable[1][3]);
                mlarge = average(sizetable[0][4], sizetable[1][4]);
            }
            else if(fuzzysize > 250 && fuzzysize < 500)
            {
                msmall = average(sizetable[1][1], sizetable[2][1]);
                mmoderate = average(sizetable[1][2], sizetable[2][2]);
                mspacious = average(sizetable[1][3], sizetable[2][3]);
                mlarge = average(sizetable[1][4], sizetable[2][4]);
            }
            else if(fuzzysize > 500 && fuzzysize < 750)
            {
                msmall = average(sizetable[2][1], sizetable[3][1]);
                mmoderate = average(sizetable[2][2], sizetable[3][2]);
                mspacious = average(sizetable[2][3], sizetable[3][3]);
                mlarge = average(sizetable[2][4], sizetable[3][4]);
            }
            else if(fuzzysize > 750 && fuzzysize < 1000)
            {
                msmall = average(sizetable[3][1], sizetable[4][1]);
                mmoderate = average(sizetable[3][2], sizetable[4][2]);
                mspacious = average(sizetable[3][3], sizetable[4][3]);
                mlarge = average(sizetable[3][4], sizetable[4][4]);
            }
            else if(fuzzysize > 1000 && fuzzysize < 1250)
            {
                msmall = average(sizetable[4][1], sizetable[5][1]);
                mmoderate = average(sizetable[4][2], sizetable[5][2]);
                mspacious = average(sizetable[4][3], sizetable[5][3]);
                mlarge = average(sizetable[4][4], sizetable[5][4]);
            }
            else if(fuzzysize > 1250 && fuzzysize < 1500)
            {
                msmall = average(sizetable[5][1], sizetable[6][1]);
                mmoderate = average(sizetable[5][2], sizetable[6][2]);
                mspacious = average(sizetable[5][3], sizetable[6][3]);
                mlarge = average(sizetable[5][4], sizetable[6][4]);
            }
            else if(fuzzysize > 1500 && fuzzysize < 1750)
            {
                msmall = average(sizetable[6][1], sizetable[7][1]);
                mmoderate = average(sizetable[6][2], sizetable[7][2]);
                mspacious = average(sizetable[6][3], sizetable[7][3]);
                mlarge = average(sizetable[6][4], sizetable[7][4]);
            }
            else if(fuzzysize > 1750 && fuzzysize < 2000)
            {
                msmall = average(sizetable[7][1], sizetable[8][1]);
                mmoderate = average(sizetable[7][2], sizetable[8][2]);
                mspacious = average(sizetable[7][3], sizetable[8][3]);
                mlarge = average(sizetable[7][4], sizetable[8][4]);
            }
            else if(fuzzysize > 2000 && fuzzysize < 2250)
            {
                msmall = average(sizetable[8][1], sizetable[9][1]);
                mmoderate = average(sizetable[8][2], sizetable[9][2]);
                mspacious = average(sizetable[8][3], sizetable[9][3]);
                mlarge = average(sizetable[8][4], sizetable[9][4]);
            }
            else if(fuzzysize > 2250 && fuzzysize < 2500)
            {
                msmall = average(sizetable[9][1], sizetable[10][1]);
                mmoderate = average(sizetable[9][2], sizetable[10][2]);
                mspacious = average(sizetable[9][3], sizetable[10][3]);
                mlarge = average(sizetable[9][4], sizetable[10][4]);
            }
            else if(fuzzysize > 2500 && fuzzysize < 2750)
            {
                msmall = average(sizetable[10][1], sizetable[11][1]);
                mmoderate = average(sizetable[10][2], sizetable[11][2]);
                mspacious = average(sizetable[10][3], sizetable[11][3]);
                mlarge = average(sizetable[10][4], sizetable[11][4]);
            }
            else if(fuzzysize > 2750 && fuzzysize < 3000)
            {
                msmall = average(sizetable[11][1], sizetable[12][1]);
                mmoderate = average(sizetable[11][2], sizetable[12][2]);
                mspacious = average(sizetable[11][3], sizetable[12][3]);
                mlarge = average(sizetable[11][4], sizetable[12][4]);
            }
        }
    }

    //number of bedrooms
    float mstudio, mone, mtwo, mthree;
    if(fuzzybed == "studio")
    {
        mstudio = 1;
        mone = 0;
        mtwo = 0;
        mthree = 0;
    }
    else if(fuzzybed == "one")
    {
        mstudio = 0;
        mone = 1;
        mtwo = 0;
        mthree = 0;
    }
    else if(fuzzybed == "two")
    {
        mstudio = 0;
        mone = 0;
        mtwo = 1;
        mthree = 0;
    }
    else if(fuzzybed == "three")
    {
        mstudio = 0;
        mone = 0;
        mtwo = 0;
        mthree = 1;
    }

    //facilities
    float mnone, mgym, mpool;
    if(fuzzyfac == "none")
    {
       mnone = 1;
       mgym = 0;
       mpool = 0;
    }
    else if(fuzzyfac == "gym")
    {
       mnone = 0;
       mgym = 1;
       mpool = 0;
    }
    else if(fuzzyfac == "pool")
    {
       mnone = 0;
       mgym = 0;
       mpool = 1;
    }

    //transportation access
    float mtransnone, mtram, mmetro;
    if(fuzzytrans == "none")
    {
       mtransnone = 1;
       mtram = 0;
       mmetro = 0;
    }
    else if(fuzzytrans == "tram")
    {
       mtransnone = 0;
       mtram = 1;
       mmetro = 0;
    }
    else if(fuzzytrans == "metro")
    {
       mtransnone = 0;
       mtram = 0;
       mmetro = 1;
    }


    //code for determining the crisp values (from the price vector)

    cout << "crispifying..." << endl << endl << endl;

    float crispvalues[4];
    crispvalues[0] = average(50000, 75000, 100000);
    crispvalues[1] = average(100000, 125000, 150000);
    crispvalues[2] = average(150000, 175000, 200000);
    crispvalues[3] = average(200000, 225000, 250000);

    vector<float> rulevector; // a vector to store the result of applying the rules
    vector<float> crispvector; // a vector to store the respective crisp values

    Max max; // to use the max functions
    Min min; // to use the min functions

    float rule1 = min.min(mstudio, msmall);
    rulevector.push_back(rule1);
    crispvector.push_back(crispvalues[0]);

    float rule2 = min.min(msea, mspacious);
    rulevector.push_back(rule2);
    crispvector.push_back(crispvalues[2]);

    float rule3 = min.min(mmoderate, mone);
    rulevector.push_back(rule3);
    crispvector.push_back(crispvalues[1]);

    float rule4 = min.min(mthree, mlarge);
    rulevector.push_back(rule4);
    crispvector.push_back(crispvalues[3]);

    float rule5 = min.min(mmarina, mmoderate);
    rulevector.push_back(rule5);
    crispvector.push_back(crispvalues[1]);

    float rule6 = max.max(mspacious, mtwo);
    rulevector.push_back(rule6);
    crispvector.push_back(crispvalues[2]);

    float rule7 = max.max(mgym, mone);
    rulevector.push_back(rule3);
    crispvector.push_back(crispvalues[1]);

    float rule8 = max.max(mnone, msmall);
    rulevector.push_back(rule8);
    crispvector.push_back(crispvalues[0]);

    float rule9 = max.max(msea, mpool);
    rulevector.push_back(rule9);
    crispvector.push_back(crispvalues[2]);

    float rule10 = max.max(mthree, mlarge);
    rulevector.push_back(rule10);
    crispvector.push_back(crispvalues[3]);

    float rule11 = min.min(mtransnone, mnone);
    rulevector.push_back(rule11);
    crispvector.push_back(crispvalues[0]);

    float rule12 = min.min(mtram, mgym);
    rulevector.push_back(rule12);
    crispvector.push_back(crispvalues[1]);

    float rule13 = min.min(mtwo, mmetro);
    rulevector.push_back(rule13);
    crispvector.push_back(crispvalues[2]);

    float rule14 = min.min(mtwo, mpool);
    rulevector.push_back(rule14);
    crispvector.push_back(crispvalues[2]);

    float rule15 = min.min(mpool, mmetro);
    rulevector.push_back(rule15);
    crispvector.push_back(crispvalues[2]);

    float rule16 = min.min(mpool, mspacious);
    rulevector.push_back(rule16);
    crispvector.push_back(crispvalues[2]);

    float rule17 = max.max(mtwo, mlarge);
    rulevector.push_back(rule17);
    crispvector.push_back(crispvalues[3]);

    float rule18 = max.max(mmarina, mstudio);
    rulevector.push_back(rule18);
    crispvector.push_back(crispvalues[1]);

    float rule19 = min.min(msmall, mstreet, mstudio);
    rulevector.push_back(rule19);
    crispvector.push_back(crispvalues[0]);

    float rule20 = min.min(mmarina, mone, mmoderate);
    rulevector.push_back(rule20);
    crispvector.push_back(crispvalues[1]);

    float rule21 = min.min(mtwo, mspacious, msea);
    rulevector.push_back(rule21);
    crispvector.push_back(crispvalues[2]);

    float rule22 = min.min(mmarina, mgym, mtram, mone, mmoderate);
    rulevector.push_back(rule22);
    crispvector.push_back(crispvalues[1]);

    float rule23 = min.min(mmetro, mtwo, mpool, mspacious, msea);
    rulevector.push_back(rule23);
    crispvector.push_back(crispvalues[2]);

    float rule24 = min.min(mstreet, mstudio, mtransnone, msmall, mnone);
    rulevector.push_back(rule24);
    crispvector.push_back(crispvalues[0]);

    float rule25 = min.min(mlarge, mstudio);
    rulevector.push_back(rule25);
    crispvector.push_back(crispvalues[3]);

    float rule26 = min.min(mmetro, mtwo, mpool, msea);
    rulevector.push_back(rule26);
    crispvector.push_back(crispvalues[2]);

    float rule27 = min.min(mmarina, mtram, mone, mmoderate);
    rulevector.push_back(rule27);
    crispvector.push_back(crispvalues[1]);

    float rule28 = min.min(mmarina, mgym, mtram, mmoderate);
    rulevector.push_back(rule28);
    crispvector.push_back(crispvalues[1]);

    float rule29 = max.max(mstreet, mlarge, mnone);
    rulevector.push_back(rule29);
    crispvector.push_back(crispvalues[3]);

    float rule30 = min.min(mnone, mstudio, mtransnone, msmall);
    rulevector.push_back(rule30);
    crispvector.push_back(crispvalues[0]);


    //code for determining the price based on the result from the rules and the crisp values (aka defuzzification)
    cout << "defuzzifying..." << endl << endl << endl;

    float sum = 0, sum2 = 0;
    vector<float> prodvector;

    for(int i = 0; i < crispvector.size(); i++)
    {
        prodvector.push_back(rulevector[i] * crispvector[i]);
        sum2 += rulevector[i];
    }

    for(int i = 0; i < prodvector.size(); i++)
    {
        sum += prodvector[i];
    }

    float price = sum/sum2;

    cout << "Price: " << price << endl;

    return 0;
}

float average(float a, float b)
{
    return ((a + b)/2);
}

float average(float a, float b, float c)
{
    return ((a + b + c)/3);
}



