# use ie=1, not use=0
use_ie = 1

# AUTH_OPEN=1, AUTH_WPAPSK=2, AUTH_SHARED=4, AUTH_WPA=8, AUTH_WPA2=0x10, AUTH_WPA2PSK=0x20
auth_type_flags = 35

# ENCRYPT_NONE=1, ENCRYPT_WEP=2, ENCRYPT_TKIP=4, ENCRYPT_AES=8
encrypt_type_flags = 15

uuid = 63041253101920061228aabbccddeeff
manufacturer = "SITECOM Corp."
model_name = "WL-183"
device_attrib_id = 1
device_oui = 0050f204
device_category_id = 6
device_sub_category_id = 1

# PASS_ID_DEFAULT=0, PASS_ID_USER=1, PASS_ID_MACHINE=2, PASS_ID_REKEY=3,
# PASS_ID_PB=4, PASS_ID_REG=5, PASS_ID_RESERVED=6
device_password_id = 0

tx_timeout = 5
resent_limit = 2
reg_timeout = 120
block_timeout = 60

# Those parameters are supported by WPS daemon starting from V1.2.
# Need to patch /rtl8186/linux-2.4.18/drivers/char/rtl_gpio.c if
# you want to use wireless LED instead of WPS LED.
WPS_START_LED_GPIO_number = 2
WPS_END_LED_unconfig_GPIO_number = 0
WPS_END_LED_config_GPIO_number = 0
WPS_PBC_overlapping_GPIO_number = 1
PBC_overlapping_LED_time_out = 30
No_ifname_for_flash_set = 0
