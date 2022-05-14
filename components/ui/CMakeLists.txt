idf_component_register(
    SRCS ui.c
    INCLUDE_DIRS include
    REQUIRES nvs_flash driver
    PRIV_REQUIRES user_driver
)