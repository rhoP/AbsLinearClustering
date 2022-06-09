/*
 *  
 *
 *  Copyright (c) Rohit Pochampalli
 *
 */


#include <omp.h>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>


using namespace std;


class Point {
private:
    int PointID, ClusterID;
    int dimensions;
    vector<double> values;
    vector<double> lineToVec(string &line)
    {
        vector<double> values;
        string tmp = "";

        for (int i = 0; i < (int)line.length(); i++)
        {
            if ((48 <= int(line[i]) && int(line[i])  <= 57) || line[i] == '.' || line[i] == '+' || line[i] == '-' || line[i] == 'e')
            {
                tmp += line[i];
            }
            else if (tmp.length() > 0)
            {

                values.push_back(stod(tmp));
                tmp = "";
            }
        }
        if (tmp.length() > 0)
        {
            values.push_back(stod(tmp));
            tmp = "";
        }

        return values;
    }
};