#include <limits>
#include <iomanip>
#include "CppUnitTest.h"
#include "..\SimpleVectorLib\Vector.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace SimpleVectorUnitTest
{
	TEST_CLASS(SimpleVectorUnitTest)
	{
	public:
		TEST_METHOD(ConstructorZeroZero)
		{
			Vector v(0.0L, 0.0L);
			Assert::AreEqual(0.0L, v.getX(), std::numeric_limits<double>::epsilon());
			Assert::AreEqual(0.0L, v.getY(), std::numeric_limits<double>::epsilon());
		}
		TEST_METHOD(ConstructorPlusZero)
		{
			Vector v(12.54L, 0.0L);
			Assert::AreEqual(12.54L, v.getX(), std::numeric_limits<double>::epsilon());
			Assert::AreEqual(0.0L, v.getY(), std::numeric_limits<double>::epsilon());
		}
		TEST_METHOD(ConstructorZeroPlus)
		{
			Vector v(0.0L, 534.231L);
			Assert::AreEqual(0.0L, v.getX(), std::numeric_limits<double>::epsilon());
			Assert::AreEqual(534.231L, v.getY(), std::numeric_limits<double>::epsilon());
		}
		TEST_METHOD(ConstructorMinusZero)
		{
			Vector v(-343.673L, 0.0L);
			Assert::AreEqual(-343.673L, v.getX(), std::numeric_limits<double>::epsilon());
			Assert::AreEqual(0.0L, v.getY(), std::numeric_limits<double>::epsilon());
		}
		TEST_METHOD(ConstructorZeroMinus)
		{
			Vector v(0.0L, -93219.432L);
			Assert::AreEqual(0.0L, v.getX(), std::numeric_limits<double>::epsilon());
			Assert::AreEqual(-93219.432L, v.getY(), std::numeric_limits<double>::epsilon());
		}
		TEST_METHOD(ConstructorPlusPlus)
		{
			Vector v(352.34L, 52.38L);
			Assert::AreEqual(352.34L, v.getX(), std::numeric_limits<double>::epsilon());
			Assert::AreEqual(52.38L, v.getY(), std::numeric_limits<double>::epsilon());
		}
		TEST_METHOD(ConstructorPlusMinus)
		{
			Vector v(194.0L, -821.732L);
			Assert::AreEqual(194.0L, v.getX(), std::numeric_limits<double>::epsilon());
			Assert::AreEqual(-821.732L, v.getY(), std::numeric_limits<double>::epsilon());
		}
		TEST_METHOD(ConstructorMinusPlus)
		{
			Vector v(-4901.538L, 1930.891L);
			Assert::AreEqual(-4901.538L, v.getX(), std::numeric_limits<double>::epsilon());
			Assert::AreEqual(1930.891L, v.getY(), std::numeric_limits<double>::epsilon());
		}
		TEST_METHOD(ConstructorMinusMinus)
		{
			Vector v(-53128.314L, -79256.9289L);
			Assert::AreEqual(-53128.314L, v.getX(), std::numeric_limits<double>::epsilon());
			Assert::AreEqual(-79256.9289L, v.getY(), std::numeric_limits<double>::epsilon());
		}
		TEST_METHOD(SetXZero)
		{
			double const x = 0.0L;
			Vector v(100.0L, 100.0L);
			v.setX(x);
			Assert::AreEqual(x, v.getX(), std::numeric_limits<double>::epsilon());
			Assert::AreEqual(100.0L, v.getY(), std::numeric_limits<double>::epsilon());
		}
		TEST_METHOD(SetXPlus)
		{
			double const x =729564.234L;
			Vector v(100.0L, 100.0L);
			v.setX(x);
			Assert::AreEqual(x, v.getX(), std::numeric_limits<double>::epsilon());
			Assert::AreEqual(100.0L, v.getY(), std::numeric_limits<double>::epsilon());
		}
		TEST_METHOD(SetXMinus)
		{
			double const x = -9392705.2319L;
			Vector v(100.0L, 100.0L);
			v.setX(x);
			Assert::AreEqual(x, v.getX(), std::numeric_limits<double>::epsilon());
			Assert::AreEqual(100.0L, v.getY(), std::numeric_limits<double>::epsilon());
		}
		TEST_METHOD(SetYZero)
		{
			double const y = 0.0L;
			Vector v(100.0L, 100.0L);
			v.setY(y);
			Assert::AreEqual(100.0L, v.getX(), std::numeric_limits<double>::epsilon());
			Assert::AreEqual(y, v.getY(), std::numeric_limits<double>::epsilon());
		}
		TEST_METHOD(SetYPlus)
		{
			double const y = 2934.432L;
			Vector v(100.0L, 100.0L);
			v.setY(y);
			Assert::AreEqual(100.0L, v.getX(), std::numeric_limits<double>::epsilon());
			Assert::AreEqual(y, v.getY(), std::numeric_limits<double>::epsilon());
		}
		TEST_METHOD(SetYMinus)
		{
			double const y = -10382.89231;
			Vector v(100.0L, 100.0L);
			v.setY(y);
			Assert::AreEqual(100.0L, v.getX(), std::numeric_limits<double>::epsilon());
			Assert::AreEqual(y, v.getY(), std::numeric_limits<double>::epsilon());
		}
		TEST_METHOD(MagnitudeZeroZero)
		{
			Vector v(0.0L, 0.0L);
			Assert::AreEqual(0.0L, v.magnitude(), 0.001L);
		}
		TEST_METHOD(MagnitudeZeroPlus)
		{
			Vector v(0.0L, 125.43L);
			Assert::AreEqual(125.43L, v.magnitude(), 0.001L);
		}
		TEST_METHOD(MagnitudePlusZero)
		{
			Vector v(6234.287L, 0.0L);
			Assert::AreEqual(6234.287L, v.magnitude(), 0.001L);
		}
		TEST_METHOD(MagnitudeZeroMinus)
		{
			Vector v(0.0L, -325.43L);
			Assert::AreEqual(325.43L, v.magnitude(), 0.001L);
		}
		TEST_METHOD(MagnitudeMinusZero)
		{
			Vector v(-234.287L, 0.0L);
			Assert::AreEqual(234.287L, v.magnitude(), 0.001L);
		}
		TEST_METHOD(MagnitudePlusPlus)
		{
			Vector v(362.659L, 310.63L);
			Assert::AreEqual(477.507L, v.magnitude(), 0.001L);
		}
		TEST_METHOD(MagnitudePlusMinus)
		{
			Vector v(382.4532L, -9203.12832L);
			Assert::AreEqual(9211.071L, v.magnitude(), 0.001L);
		}
		TEST_METHOD(MagnitudeMinusPlus)
		{
			Vector v(-83.5632L, 9.2L);
			Assert::AreEqual(84.068L, v.magnitude(), 0.001L);
		}
		TEST_METHOD(MagnitudeMinusMinus)
		{
			Vector v(-4912.621L, -7591.3019L);
			Assert::AreEqual(9042.218L, v.magnitude(), 0.001L);
		}
		TEST_METHOD(DirectionZeroZero)
		{
			Vector v(0.0L, 0.0L);
			Assert::AreEqual(0.0L, v.direction(), 0.001L);
		}
		TEST_METHOD(DirectionZeroPlus)
		{
			Vector v(0.0L, 125.43L);
			Assert::AreEqual(1.570L, v.direction(), 0.001L);
		}
		TEST_METHOD(DirectionPlusZero)
		{
			Vector v(6234.287L, 0.0L);
			Assert::AreEqual(0.0L, v.direction(), 0.001L);
		}
		TEST_METHOD(DirectionZeroMinus)
		{
			Vector v(0.0L, -325.43L);
			Assert::AreEqual(-1.570L, v.direction(), 0.001L);
		}
		TEST_METHOD(DirectionMinusZero)
		{
			Vector v(-234.287L, 0.0L);
			Assert::AreEqual(3.141L, v.direction(), 0.001L);
		}
		TEST_METHOD(DirectionPlusPlus)
		{
			Vector v(362.659L, 310.63L);
			Assert::AreEqual(0.708L, v.direction(), 0.001L);
		}
		TEST_METHOD(DirectionPlusMinus)
		{
			Vector v(382.4532L, -9203.12832L);
			Assert::AreEqual(-1.529L, v.direction(), 0.001L);
		}
		TEST_METHOD(DirectionMinusPlus)
		{
			Vector v(-83.5632L, 9.2L);
			Assert::AreEqual(3.031L, v.direction(), 0.001L);
		}
		TEST_METHOD(DirectionMinusMinus)
		{
			Vector v(-4912.621L, -7591.3019L);
			Assert::AreEqual(-2.145L, v.direction(), 0.001L);
		}
		TEST_METHOD(ToStreamZeroZero)
		{
			Vector v(0.0L, 0.0L);
			std::stringstream stream;
			stream << std::fixed << std::setprecision(3) << v;
			Assert::AreEqual("(0.000,0.000)", stream.str().c_str());
		}
		TEST_METHOD(ToStreamPlusZero)
		{
			Vector v(2390.230693L, 0.0L);
			std::stringstream stream;
			stream << std::fixed << std::setprecision(3) << v;
			Assert::AreEqual("(2390.231,0.000)", stream.str().c_str());
		}
		TEST_METHOD(ToStreamZeroPlus)
		{
			Vector v(0.0L, 749.2341L);
			std::stringstream stream;
			stream << std::fixed << std::setprecision(3) << v;
			Assert::AreEqual("(0.000,749.234)", stream.str().c_str());
		}
		TEST_METHOD(ToStreamMinusZero)
		{
			Vector v(-9.1L, 0.0L);
			std::stringstream stream;
			stream << std::fixed << std::setprecision(3) << v;
			Assert::AreEqual("(-9.100,0.000)", stream.str().c_str());
		}
		TEST_METHOD(ToStreamZeroMinus)
		{
			Vector v(0.0L, -32.9986L);
			std::stringstream stream;
			stream << std::fixed << std::setprecision(3) << v;
			Assert::AreEqual("(0.000,-32.999)", stream.str().c_str());
		}
		TEST_METHOD(ToStreamPlusPlus)
		{
			Vector v(731.3291, 653.32912L);
			std::stringstream stream;
			stream << std::fixed << std::setprecision(3) << v;
			Assert::AreEqual("(731.329,653.329)", stream.str().c_str());
		}
		TEST_METHOD(ToStreamPlusMinus)
		{
			Vector v(469.2909L, -193.82912L);
			std::stringstream stream;
			stream << std::fixed << std::setprecision(3) << v;
			Assert::AreEqual("(469.291,-193.829)", stream.str().c_str());
		}
		TEST_METHOD(ToStreamMinusPlus)
		{
			Vector v(-2901.234L, 392.42799L);
			std::stringstream stream;
			stream << std::fixed << std::setprecision(3) << v;
			Assert::AreEqual("(-2901.234,392.428)", stream.str().c_str());
		}
		TEST_METHOD(ToStreamMinusMinus)
		{
			Vector v(-120.234L, -93.82912L);
			std::stringstream stream;
			stream << std::fixed << std::setprecision(3) << v;
			Assert::AreEqual("(-120.234,-93.829)", stream.str().c_str());
		}
		TEST_METHOD(AddZeroZeroToZeroZero)
		{
			Vector v1(0.0L, 0.0L);
			Vector v2(0.0L, 0.0L);
			Vector v(100.0L, 100.0L);
			v = v1 + v2;
			Assert::AreEqual(0.0L, v.getX(), 0.001L);
			Assert::AreEqual(0.0L, v.getY(), 0.001L);
		}
		TEST_METHOD(AddZeroZeroToPlusMinus)
		{
			Vector v1(0.0L, 0.0L);
			Vector v2(193.2534L, -1654.2987L);
			Vector v(100.0L, 100.0L);
			v = v1 + v2;
			Assert::AreEqual(193.253L, v.getX(), 0.001L);
			Assert::AreEqual(-1654.299L, v.getY(), 0.001L);
		}
		TEST_METHOD(AddPlusMinusToZeroZero)
		{
			Vector v1(533.2634L, -254.241L);
			Vector v2(0.0L, 0.0L);
			Vector v(100.0L, 100.0L);
			v = v1 + v2;
			Assert::AreEqual(533.263L, v.getX(), 0.001L);
			Assert::AreEqual(-254.241L, v.getY(), 0.001L);
		}
		TEST_METHOD(AddPlusZeroToZeroMinus)
		{
			Vector v1(34.032L, 0.0L);
			Vector v2(0.0L, -491.2003L);
			Vector v(100.0L, 100.0L);
			v = v1 + v2;
			Assert::AreEqual(34.032L, v.getX(), 0.001L);
			Assert::AreEqual(-491.200L, v.getY(), 0.001L);
		}
		TEST_METHOD(AddZeroMinusToPlusZero)
		{
			Vector v1(0.0L, -491.2003L);
			Vector v2(34.032L, 0.0L); 
			Vector v(100.0L, 100.0L);
			v = v1 + v2;
			Assert::AreEqual(34.032L, v.getX(), 0.001L);
			Assert::AreEqual(-491.200L, v.getY(), 0.001L);
		}
		TEST_METHOD(AddPlusPlusToPlusPlus)
		{
			Vector v1(412.2L, 394.2832L);
			Vector v2(84.2341L, 83931892.23134L);
			Vector v(100.0L, 100.0L);
			v = v1 + v2;
			Assert::AreEqual(496.434L, v.getX(), 0.001L);
			Assert::AreEqual(83932286.515L, v.getY(), 0.001L);
		}
		TEST_METHOD(AddPlusPlusToMinusMinus)
		{
			Vector v1(1412.452L, 94.2352L);
			Vector v2(-8424.2341L, -9392.26334L);
			Vector v(100.0L, 100.0L);
			v = v1 + v2;
			Assert::AreEqual(-7011.782L, v.getX(), 0.001L);
			Assert::AreEqual(-9298.028L, v.getY(), 0.001L);
		}
		TEST_METHOD(AddMinusMinusToPlusPlus)
		{
			Vector v1(-7422.432L, -6594.352L);
			Vector v2(44.241L, 492.2764L);
			Vector v(100.0L, 100.0L);
			v = v1 + v2;
			Assert::AreEqual(-7378.191L, v.getX(), 0.001L);
			Assert::AreEqual(-6102.076L, v.getY(), 0.001L);
		}
		TEST_METHOD(AddMinusPlusToPlusMinus)
		{
			Vector v1(-7422.432L, 6594.352L);
			Vector v2(744.291L, -482.2364L);
			Vector v(100.0L, 100.0L);
			v = v1 + v2;
			Assert::AreEqual(-6678.141L, v.getX(), 0.001L);
			Assert::AreEqual(6112.116L, v.getY(), 0.001L);
		}
		TEST_METHOD(AddPlusMinusToMinusPlus)
		{
			Vector v1(5432.472L, -1592.342L);
			Vector v2(-544.251L, 472.2964L);
			Vector v(100.0L, 100.0L);
			v = v1 + v2;
			Assert::AreEqual(4888.221L, v.getX(), 0.001L);
			Assert::AreEqual(-1120.046L, v.getY(), 0.001L);
		}
		TEST_METHOD(AddPlusMinusToMinusPlusRezultZero)
		{
			Vector v1(432.472L, -25.372L);
			Vector v2(-432.472L, 25.372L);
			Vector v(100.0L, 100.0L);
			v = v1 + v2;
			Assert::AreEqual(0.0L, v.getX(), 0.001L);
			Assert::AreEqual(0.0L, v.getY(), 0.001L);
		}
		TEST_METHOD(AddMinusPlusToPlusMinusRezultZero)
		{
			Vector v1(-132.872L, 725.872L);
			Vector v2(132.872L, -725.872L);
			Vector v(100.0L, 100.0L);
			v = v1 + v2;
			Assert::AreEqual(0.0L, v.getX(), 0.001L);
			Assert::AreEqual(0.0L, v.getY(), 0.001L);
		}
		TEST_METHOD(SubZeroZeroToZeroZero)
		{
			Vector v1(0.0L, 0.0L);
			Vector v2(0.0L, 0.0L);
			Vector v(100.0L, 100.0L);
			v = v1 - v2;
			Assert::AreEqual(0.0L, v.getX(), 0.001L);
			Assert::AreEqual(0.0L, v.getY(), 0.001L);
		}
		TEST_METHOD(SubZeroZeroToPlusMinus)
		{
			Vector v1(0.0L, 0.0L);
			Vector v2(193.2534L, -1654.2987L);
			Vector v(100.0L, 100.0L);
			v = v1 - v2;
			Assert::AreEqual(-193.253L, v.getX(), 0.001L);
			Assert::AreEqual(1654.299L, v.getY(), 0.001L);
		}
		TEST_METHOD(SubPlusMinusToZeroZero)
		{
			Vector v1(533.2634L, -254.241L);
			Vector v2(0.0L, 0.0L);
			Vector v(100.0L, 100.0L);
			v = v1 - v2;
			Assert::AreEqual(533.263L, v.getX(), 0.001L);
			Assert::AreEqual(-254.241L, v.getY(), 0.001L);
		}
		TEST_METHOD(SubPlusZeroToZeroMinus)
		{
			Vector v1(34.032L, 0.0L);
			Vector v2(0.0L, -491.2003L);
			Vector v(100.0L, 100.0L);
			v = v1 - v2;
			Assert::AreEqual(34.032L, v.getX(), 0.001L);
			Assert::AreEqual(491.200L, v.getY(), 0.001L);
		}
		TEST_METHOD(SubZeroMinusToPlusZero)
		{
			Vector v1(0.0L, -491.2003L);
			Vector v2(34.032L, 0.0L);
			Vector v(100.0L, 100.0L);
			v = v1 - v2;
			Assert::AreEqual(-34.032L, v.getX(), 0.001L);
			Assert::AreEqual(-491.200L, v.getY(), 0.001L);
		}
		TEST_METHOD(SubPlusPlusToPlusPlus)
		{
			Vector v1(412.2L, 394.2832L);
			Vector v2(84.2341L, 83931892.23134L);
			Vector v(100.0L, 100.0L);
			v = v1 - v2;
			Assert::AreEqual(327.966L, v.getX(), 0.001L);
			Assert::AreEqual(-83931497.948L, v.getY(), 0.001L);
		}
		TEST_METHOD(SubPlusPlusToMinusMinus)
		{
			Vector v1(1412.452L, 94.2352L);
			Vector v2(-8424.2341L, -9392.26334L);
			Vector v(100.0L, 100.0L);
			v = v1 - v2;
			Assert::AreEqual(9836.686L, v.getX(), 0.001L);
			Assert::AreEqual(9486.498L, v.getY(), 0.001L);
		}
		TEST_METHOD(SubMinusMinusToPlusPlus)
		{
			Vector v1(-7422.432L, -6594.352L);
			Vector v2(44.241L, 492.2764L);
			Vector v(100.0L, 100.0L);
			v = v1 - v2;
			Assert::AreEqual(-7466.673L, v.getX(), 0.001L);
			Assert::AreEqual(-7086.628L, v.getY(), 0.001L);
		}
		TEST_METHOD(SubMinusPlusToPlusMinus)
		{
			Vector v1(-7422.432L, 6594.352L);
			Vector v2(744.291L, -482.2364L);
			Vector v(100.0L, 100.0L);
			v = v1 - v2;
			Assert::AreEqual(-8166.723L, v.getX(), 0.001L);
			Assert::AreEqual(7076.588L, v.getY(), 0.001L);
		}
		TEST_METHOD(SubPlusMinusToMinusPlus)
		{
			Vector v1(5432.472L, -1592.342L);
			Vector v2(-544.251L, 472.2964L);
			Vector v(100.0L, 100.0L);
			v = v1 - v2;
			Assert::AreEqual(5976.723L, v.getX(), 0.001L);
			Assert::AreEqual(-2064.638L, v.getY(), 0.001L);
		}
		TEST_METHOD(SubPlusMinusToPlusMinusRezultZero)
		{
			Vector v1(432.472L, -25.372L);
			Vector v2(432.472L, -25.372L);
			Vector v(100.0L, 100.0L);
			v = v1 - v2;
			Assert::AreEqual(0.0L, v.getX(), 0.001L);
			Assert::AreEqual(0.0L, v.getY(), 0.001L);
		}
		TEST_METHOD(SubMinusPlusToMinusPlusRezultZero)
		{
			Vector v1(-132.872L, 725.872L);
			Vector v2(-132.872L, 725.872L);
			Vector v(100.0L, 100.0L);
			v = v1 - v2;
			Assert::AreEqual(0.0L, v.getX(), 0.001L);
			Assert::AreEqual(0.0L, v.getY(), 0.001L);
		}
	};
}
