idf_component_register(
    SRCS fdk_aac_decoder.c
    INCLUDE_DIRS include
    PRIV_REQUIRES common fdk-aac audio_player audio_renderer libm4a
)