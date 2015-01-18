#include <linux/gpio.h>
#include <linux/platform_device.h>

#include <mach/irqs.h>
#include <mach/map.h>

/* G3D */
struct platform_device s3c_device_g3d = {
	        .name           = "pvrsrvkm",
		        .id             = -1,
};

