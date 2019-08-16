//#include "GA.hpp"
#include <cmath>
#include <Eigen/Eigen>
#include <iostream>
using namespace std;

double MyobjFunc(double, double);
int main()
{
//	Eigen::ArrayXd temp;
//	string v;
//
//	temp = temp.Random(30);
//	temp = temp.abs();
//	temp = round(temp);
//
//	cout << temp << endl;
//
//	for(int i = 0; i != 30; ++i)
//	{
//		cout << toString(temp(i)) << "\t";
//	}
//	cout << endl;
	//	GA g;
	//	g.InitGroup();
//	string s("10010011");
//	int value = 0.0;	
//	for (int i = 7, j = 0; i >= 0; --i, ++j)	
//	{
//		if (s[j] == '1')
//			value += static_cast<int>(pow(2,i));
//	}
//	cout << value << endl;
//	cout << s.size() << endl;
	//		GA g;
	//		string st("10110011100101");
	//		g.bin2dec(st);
//	GA g;
//	g.InitGroup();
//	string temp1; 
//	string tmp;
//	vector<string> temp2, temp3;
//	Eigen::ArrayXXd record(NUM,1);
//
//	for (int i = 0; i != NUM; ++i)
//	{
//		for (int j = 0; j != NUM; ++j)
//		{
//			temp1 = g.v[j];
//			for (auto it = temp1.cbegin(); it != (temp1.cbegin() + 18); ++it)
//			{
//				tmp += *it;
//			}
//
//			temp2.push_back(tmp);		// stands for x1
//			tmp.clear();
//			for (auto it = (temp1.cbegin() + 18); it != temp1.cend(); ++it)
//			{
//				tmp += *it;
//			}
//
//			temp3.push_back(tmp);		// stands for x2
//			tmp.clear();
//			
//		}
//		record(i, 0) = objFunc(g.bin2dec(temp2[i]),g.bin2dec(temp3[i]));
//	}
//
//	for (int i = 0; i != NUM; ++i)
//	{
//		cout << temp2[i] << "\t" << temp3[i];
//		cout << endl;
//	}
//	
//	cout << "record = " << endl;
//	cout << record << endl;
	//	GA g;
	//	g.InitGroup();		// remember to Init or it'll cause segmentation fault
	//	Eigen::ArrayXXd record(NUM,1);
	//	record = g.adapt(MyobjFunc);
	//	cout << record << endl;
	Eigen::Array3d v(1,4212,23321), w(3,4,5);
	//std::cout << v.maxCoeff() << endl; 		// maxCoeff() returns the max value in an array
	Eigen::Array3d::Index maxRow;
	double max = v.maxCoeff(&maxRow);		// get the max value and its index (remember it starts from 0)
	std :: cout << "Max: " << max << " at: " << maxRow << std :: endl;
	std :: cout << v(2) << std :: endl;

}


//double MyobjFunc(double x1, double x2)
//{
//	return 21.5 + x1 * sin (4 * PI * x1) + x2 * sin(20 * PI * x2);
//	//return sin(x1) + sin(x2);
//}