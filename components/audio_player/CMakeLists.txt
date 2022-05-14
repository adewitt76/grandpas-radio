idf_component_register(
    SRCS audio_player.c
    INCLUDE_DIRS include
    PRIV_REQUIRES common audio_renderer fifo fdk-aac_decoder libfaad_decoder mp3_decoder controls
)