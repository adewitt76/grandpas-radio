idf_component_register(
    SRCS common_buffer.c
    INCLUDE_DIRS include
    REQUIRES wpa_supplicant
    PRIV_REQUIRES fifo
)