idf_component_register(
    SRCS mp3_decoder.c
    INCLUDE_DIRS include
    PRIV_REQUIRES audio_renderer audio_player common fifo
)