idf_component_register(
    SRCS main.c wifi.c
    INCLUDE_DIRS include
)
# PRIV_REQUIRES web_radio nvs_flash ui fifo audio_player
