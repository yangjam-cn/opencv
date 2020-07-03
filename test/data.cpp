#include <opencv2/core/core.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main(int argc, char** argv)
{
	/* ���캯���������� */
	Mat M(2, 2, CV_8UC3, Scalar(0, 0, 255));
	cout << "M = " << endl << " " << M << endl;
	/* ���Ϊ2x2����ÿ��Ԫ��Ϊ3ͨ��ֵ��alp_1 = 0��alp_2 = 0, alp_3 = 255 */

	/* ��create������������ */
	M.create(2, 2, CV_8UC(2));
	cout << "M = " << endl << " " << M << endl;
	/* ���Ϊ2x2����ÿ��Ԫ��Ϊ2ͨ��ֵ */

	/* ������ά���� */
	int sz[3] = { 2, 2, 2 };
	Mat L(3, sz, CV_8UC(1), Scalar::all(0));

	/* ��matlab����eye�������� */
	Mat E = Mat::eye(3, 3, CV_64F);
	cout << "E = " << endl << " " << E << endl;
	/* ���Ϊ3x3��λ���� */

	/* ���ݶ���1 */
	Mat O = Mat::ones(2, 2, CV_32F);
	cout << "O = " << endl << " " << O << endl;
	/* ���Ϊ2x2ȫ1���� */

	/* ���ݶ���0 */
	Mat Z = Mat::zeros(2, 2, CV_8UC1);
	cout << "Z = " << endl << " " << Z << endl;
	/* ���Ϊ2x2ȫ0���� */

	/* ����3x3˫���Ⱦ���ֵ��<<���� */
	Mat C = (Mat_<double>(3, 3) << 0, -1, 0, -1, 5, -1, 0, -1, 0);
	cout << "C = " << endl << " " << C << endl;
	/* ���Ϊ3x3���� */

	/* ���Ƶ�һ������ */
	Mat RowClone = C.row(1).clone();
	cout << "RowClone = " << endl << " " << RowClone << endl;
	/* ���Ϊ�����һ������ */

	/* �������������� */
	Mat R = Mat(3, 2, CV_8UC3);
	randu(R, Scalar::all(0), Scalar::all(255));
	cout << "R  = " << endl << R << endl;
	/* ���Ϊ3x2��3ͨ������ */
	
	Point2f P(5, 1);
	cout << "Point (2D) = " << endl << P << endl;
	/* ������2d���� */

	Point3f P3f(2, 6, 7);
	cout << "Point (3D) = " << endl << P3f << endl;
	/* ������3d���� */

	vector<float> v;
	v.push_back((float)CV_PI);
	v.push_back(2);
	v.push_back(3.01f);
	cout << "������������ = " << endl << Mat(v) << endl;
	/* ���ʸ��[3.1415, 2, 3.01] */

	vector<Point2f> vPoints(5);
	for (size_t i = 0; i < vPoints.size(); ++i)
	{
		vPoints[i] = Point2f((float)(i * 5), (float)(i % 7));
	}
	cout << "��άͼ������ = " << endl << vPoints << endl;
	/* ���2ά����ʸ��5x1���� */

	getchar();
	return 0;
}