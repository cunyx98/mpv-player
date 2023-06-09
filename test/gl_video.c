#include "test_utils.h"
#include "video/out/gpu/utils.h"

int main(void)
{
    float x;

    x = gl_video_scale_ambient_lux(16.0, 64.0, 2.40, 1.961, 16.0);
    assert_float_equal(x, 2.40f, FLT_EPSILON);

    x = gl_video_scale_ambient_lux(16.0, 64.0, 2.40, 1.961, 64.0);
    assert_float_equal(x, 1.961f, FLT_EPSILON);

    x = gl_video_scale_ambient_lux(16.0, 64.0, 1.961, 2.40, 64.0);
    assert_float_equal(x, 2.40f, FLT_EPSILON);

    x = gl_video_scale_ambient_lux(16.0, 64.0, 2.40, 1.961, 0.0);
    assert_float_equal(x, 2.40f, FLT_EPSILON);

    // 32 corresponds to the midpoint after converting lux to the log10 scale
    x = gl_video_scale_ambient_lux(16.0, 64.0, 2.40, 1.961, 32.0);
    float mid_gamma = (2.40 - 1.961) / 2 + 1.961;
    assert_float_equal(x, mid_gamma, FLT_EPSILON);
    return 0;
}
