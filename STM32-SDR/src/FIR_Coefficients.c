/*
 * FIR_Coefficients.c
 *
 *  Created on: Oct 31, 2012
 *      Author: CharleyK
 */
#include	"arm_math.h"
#include	"FIR_Coefficients.h"

//chh PSK Filter Coefficients
q15_t Dec4LPCoef[ 35 ] = {
		32767 *  -0.00021203644,
		32767 *  -0.00070252426,
		32767 *   -0.0016680526,
		32767 *   -0.0031934799,
		32767 *   -0.0051899752,
		32767 *   -0.0072862086,
		32767 *   -0.0087714235,
		32767 *   -0.0086272102,
		32767 *   -0.0056735648,
		32767 *    0.0011784719,
		32767 *      0.01261353,
		32767 *     0.028615709,
		32767 *     0.048280707,
		32767 *     0.069812051,
		32767 *     0.090735013,
		32767 *      0.10830381,
		32767 *      0.12001897,
		32767 *      0.12413413,
		32767 *      0.12001897,
		32767 *      0.10830381,
		32767 *     0.090735013,
		32767 *     0.069812051,
		32767 *     0.048280707,
		32767 *     0.028615709,
		32767 *      0.01261353,
		32767 *    0.0011784719,
		32767 *   -0.0056735648,
		32767 *   -0.0086272102,
		32767 *   -0.0087714235,
		32767 *   -0.0072862086,
		32767 *   -0.0051899752,
		32767 *   -0.0031934799,
		32767 *   -0.0016680526,
		32767 *  -0.00070252426,
		32767 *  -0.00021203644
};

/*======================================================================*/

q15_t 	FIRBitCoef[ 65 ] = {
		32767 *  4.34544353312181E-005,
		32767 * -4.91233963259580E-004,
		32767 * -7.87728675226019E-004,
		32767 * -1.35080960413432E-003,
		32767 * -2.12882395022525E-003,
		32767 * -3.13352868120857E-003,
		32767 * -4.36690434541042E-003,
		32767 * -5.81133495736277E-003,
		32767 * -7.42514606134644E-003,
		32767 * -9.14007102453525E-003,
		32767 * -1.08603737736329E-002,
		32767 * -1.24643348445605E-002,
		32767 * -1.38080486055754E-002,
		32767 * -1.47314854128492E-002,
		32767 * -1.50673587706280E-002,
		32767 * -1.46511869827097E-002,
		32767 * -1.33336912187397E-002,
		32767 * -1.09918793481672E-002,
		32767 * -7.54327547013411E-003,
		32767 * -2.95284395921849E-003,
		32767 *  2.75468424256632E-003,
		32767 *  9.49346738507647E-003,
		32767 *  1.71136504677581E-002,
		32767 *  2.54040194354235E-002,
		32767 *  3.41003627164679E-002,
		32767 *  4.28966968548455E-002,
		32767 *  5.14596043337083E-002,
		32767 *  5.94460415073074E-002,
		32767 *  6.65223329686451E-002,
		32767 *  7.23830650097610E-002,
		32767 *  7.67692292833128E-002,
		32767 *  7.94832082001426E-002,
		32767 *  8.04019187845638E-002,
		32767 *  7.94832082001426E-002,
		32767 *  7.67692292833128E-002,
		32767 *  7.23830650097610E-002,
		32767 *  6.65223329686451E-002,
		32767 *  5.94460415073074E-002,
		32767 *  5.14596043337083E-002,
		32767 *  4.28966968548455E-002,
		32767 *  3.41003627164679E-002,
		32767 *  2.54040194354235E-002,
		32767 *  1.71136504677581E-002,
		32767 *  9.49346738507647E-003,
		32767 *  2.75468424256632E-003,
		32767 * -2.95284395921849E-003,
		32767 * -7.54327547013411E-003,
		32767 * -1.09918793481672E-002,
		32767 * -1.33336912187397E-002,
		32767 * -1.46511869827097E-002,
		32767 * -1.50673587706280E-002,
		32767 * -1.47314854128492E-002,
		32767 * -1.38080486055754E-002,
		32767 * -1.24643348445605E-002,
		32767 * -1.08603737736329E-002,
		32767 * -9.14007102453525E-003,
		32767 * -7.42514606134644E-003,
		32767 * -5.81133495736277E-003,
		32767 * -4.36690434541042E-003,
		32767 * -3.13352868120857E-003,
		32767 * -2.12882395022525E-003,
		32767 * -1.35080960413432E-003,
		32767 * -7.87728675226019E-004,
		32767 * -4.91233963259580E-004,
		32767 *  4.34544353312181E-005
};

/*======================================================================*/

q15_t FIRFreqCoef[ 65 ] = {
		32767 *  -8.82290884173488E-004,
		32767 *  -1.13743887320639E-003,
		32767 *  -1.64128678489465E-003,
		32767 *  -2.05209889086253E-003,
		32767 *  -2.21756176327389E-003,
		32767 *  -1.97911605963953E-003,
		32767 *  -1.20579524827142E-003,
		32767 *   1.65272511919182E-004,
		32767 *   2.09434721909167E-003,
		32767 *   4.41226679403865E-003,
		32767 *   6.81893708889913E-003,
		32767 *   8.90459330660423E-003,
		32767 *   1.02036776754177E-002,
		32767 *   1.02663164627312E-002,
		32767 *   8.75074508195768E-003,
		32767 *   5.51366833309811E-003,
		32767 *   6.86162420348332E-004,
		32767 *  -5.28831303658911E-003,
		32767 *  -1.16532489911285E-002,
		32767 *  -1.73997493974992E-002,
		32767 *  -2.13766417901555E-002,
		32767 *  -2.24353771237607E-002,
		32767 *  -1.96068732388393E-002,
		32767 *  -1.22636654593710E-002,
		32767 *  -2.60786710341817E-004,
		32767 *   1.59860884681409E-002,
		32767 *   3.54913904978846E-002,
		32767 *   5.67733050444888E-002,
		32767 *   7.80023915048147E-002,
		32767 *   9.72073643477517E-002,
		32767 *   1.12514131590886E-001,
		32767 *   1.22377761748080E-001,
		32767 *   1.25803660705561E-001,
		32767 *   1.22377761748080E-001,
		32767 *   1.12514131590886E-001,
		32767 *   9.72073643477517E-002,
		32767 *   7.80023915048147E-002,
		32767 *   5.67733050444888E-002,
		32767 *   3.54913904978846E-002,
		32767 *   1.59860884681409E-002,
		32767 *  -2.60786710341817E-004,
		32767 *  -1.22636654593710E-002,
		32767 *  -1.96068732388393E-002,
		32767 *  -2.24353771237607E-002,
		32767 *  -2.13766417901555E-002,
		32767 *  -1.73997493974992E-002,
		32767 *  -1.16532489911285E-002,
		32767 *  -5.28831303658911E-003,
		32767 *   6.86162420348332E-004,
		32767 *   5.51366833309811E-003,
		32767 *   8.75074508195768E-003,
		32767 *   1.02663164627312E-002,
		32767 *   1.02036776754177E-002,
		32767 *   8.90459330660423E-003,
		32767 *   6.81893708889913E-003,
		32767 *   4.41226679403865E-003,
		32767 *   2.09434721909167E-003,
		32767 *   1.65272511919182E-004,
		32767 *  -1.20579524827142E-003,
		32767 *  -1.97911605963953E-003,
		32767 *  -2.21756176327389E-003,
		32767 *  -2.05209889086253E-003,
		32767 *  -1.64128678489465E-003,
		32767 *  -1.13743887320639E-003,
		32767 *  -8.82290884173488E-004
};


//////////////////////////////////////////////////////////////////////
q15_t	coeff_fir_I[NUM_FIR_COEF] = {
		0,
		-11,
		-15,
		-4,
		-19,
		4,
		-19,
		15,
		-15,
		25,
		-5,
		33,
		11,
		34,
		32,
		25,
		52,
		4,
		65,
		-28,
		64,
		-66,
		42,
		-100,
		-1,
		-118,
		-60,
		-108,
		-125,
		-64,
		-177,
		15,
		-197,
		116,
		-169,
		219,
		-85,
		295,
		50,
		314,
		215,
		254,
		376,
		105,
		488,
		-124,
		504,
		-399,
		389,
		-666,
		122,
		-856,
		-293,
		-889,
		-821,
		-681,
		-1408,
		-134,
		-1980,
		926,
		-2460,
		3095,
		-2779,
		11925,
		16384,
		-11926,
		-2779,
		-3096,
		-2460,
		-927,
		-1980,
		133,
		-1408,
		680,
		-821,
		888,
		-293,
		855,
		122,
		665,
		389,
		398,
		504,
		123,
		488,
		-106,
		376,
		-255,
		215,
		-315,
		50,
		-296,
		-85,
		-220,
		-169,
		-117,
		-197,
		-16,
		-177,
		63,
		-125,
		107,
		-60,
		117,
		-1,
		99,
		42,
		65,
		64,
		27,
		65,
		-5,
		52,
		-26,
		32,
		-35,
		11,
		-34,
		-5,
		-26,
		-15,
		-16,
		-19,
		-5,
		-19,
		3,
		-15,
		0
};
//////////////////////////////////////////////////////////////////////
q15_t 	coeff_fir_Q[NUM_FIR_COEF] = {
		0,
		-11,
		14,
		-4,
		18,
		4,
		18,
		15,
		14,
		25,
		4,
		33,
		-12,
		34,
		-33,
		25,
		-53,
		4,
		-66,
		-28,
		-65,
		-66,
		-43,
		-100,
		0,
		-118,
		59,
		-108,
		124,
		-64,
		176,
		15,
		196,
		116,
		168,
		219,
		84,
		295,
		-51,
		314,
		-216,
		254,
		-377,
		105,
		-489,
		-124,
		-505,
		-399,
		-390,
		-666,
		-123,
		-856,
		292,
		-889,
		820,
		-681,
		1407,
		-134,
		1979,
		926,
		2459,
		3095,
		2778,
		11925,
		-16384,
		-11926,
		2778,
		-3096,
		2459,
		-927,
		1979,
		133,
		1407,
		680,
		820,
		888,
		292,
		855,
		-123,
		665,
		-390,
		398,
		-505,
		123,
		-489,
		-106,
		-377,
		-255,
		-216,
		-315,
		-51,
		-296,
		84,
		-220,
		168,
		-117,
		196,
		-16,
		176,
		63,
		124,
		107,
		59,
		117,
		0,
		99,
		-43,
		65,
		-65,
		27,
		-66,
		-5,
		-53,
		-26,
		-33,
		-35,
		-12,
		-34,
		4,
		-26,
		14,
		-16,
		18,
		-5,
		18,
		3,
		14,
		0
};



