#ifndef _LINUX_ELAN_KTF2K_H
#define _LINUX_ELAN_KTF2K_H

#ifdef CONFIG_SONY_FLAMINGO
#define ELAN_X_MAX      768
#define ELAN_Y_MAX      1344
#else
#define ELAN_X_MAX      1280
#define ELAN_Y_MAX      2112
#endif

#define ELAN_KTF2K_NAME "elan-ktf2k"

struct elan_ktf2k_i2c_platform_data {
	uint16_t version;
	int abs_x_min;
	int abs_x_max;
	int abs_y_min;
	int abs_y_max;
	bool i2c_pull_up;
	int irq_gpio;
	u32 irq_flags;
	u32 reset_flags;
	int reset_gpio;
	int hw_det_gpio;
	u32 hw_det_gpio_flags;
	int mode_check_gpio;
	int (*power)(int on);
};

#endif /* _LINUX_ELAN_KTF2K_H */
