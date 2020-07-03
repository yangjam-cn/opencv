#include <opencv2/core/core.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main(int argc, char** argv)
{
	/* 构造函数建立数据 */
	Mat M(2, 2, CV_8UC3, Scalar(0, 0, 255));
	cout << "M = " << endl << " " << M << endl;
	/* 输出为2x2矩阵，每个元素为3通道值，alp_1 = 0，alp_2 = 0, alp_3 = 255 */

	/* 用create函数建立数据 */
	M.create(2, 2, CV_8UC(2));
	cout << "M = " << endl << " " << M << endl;
	/* 输出为2x2矩阵，每个元素为2通道值 */

	/* 建立多维矩阵 */
	int sz[3] = { 2, 2, 2 };
	Mat L(3, sz, CV_8UC(1), Scalar::all(0));

	/* 用matlab风格的eye建立数据 */
	Mat E = Mat::eye(3, 3, CV_64F);
	cout << "E = " << endl << " " << E << endl;
	/* 输出为3x3单位矩阵 */

	/* 数据都是1 */
	Mat O = Mat::ones(2, 2, CV_32F);
	cout << "O = " << endl << " " << O << endl;
	/* 输出为2x2全1矩阵 */

	/* 数据都是0 */
	Mat Z = Mat::zeros(2, 2, CV_8UC1);
	cout << "Z = " << endl << " " << Z << endl;
	/* 输出为2x2全0矩阵 */

	/* 建立3x3双精度矩阵，值由<<输入 */
	Mat C = (Mat_<double>(3, 3) << 0, -1, 0, -1, 5, -1, 0, -1, 0);
	cout << "C = " << endl << " " << C << endl;
	/* 输出为3x3矩阵 */

	/* 复制第一行数据 */
	Mat RowClone = C.row(1).clone();
	cout << "RowClone = " << endl << " " << RowClone << endl;
	/* 输出为矩阵第一行向量 */

	/* 用随机数填入矩阵 */
	Mat R = Mat(3, 2, CV_8UC3);
	randu(R, Scalar::all(0), Scalar::all(255));
	cout << "R  = " << endl << R << endl;
	/* 输出为3x2的3通道矩阵 */
	
	Point2f P(5, 1);
	cout << "Point (2D) = " << endl << P << endl;
	/* 输出点的2d坐标 */

	Point3f P3f(2, 6, 7);
	cout << "Point (3D) = " << endl << P3f << endl;
	/* 输出点的3d坐标 */

	vector<float> v;
	v.push_back((float)CV_PI);
	v.push_back(2);
	v.push_back(3.01f);
	cout << "浮点向量矩阵 = " << endl << Mat(v) << endl;
	/* 输出矢量[3.1415, 2, 3.01] */

	vector<Point2f> vPoints(5);
	for (size_t i = 0; i < vPoints.size(); ++i)
	{
		vPoints[i] = Point2f((float)(i * 5), (float)(i % 7));
	}
	cout << "二维图点向量 = " << endl << vPoints << endl;
	/* 输出2维坐标矢量5x1矩阵 */

	getchar();
	return 0;
}