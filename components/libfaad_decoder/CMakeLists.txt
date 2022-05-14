idf_component_register(
  SRCS libfaad_decoder.c
  INCLUDE_DIRS include
  PRIV_REQUIRES libfaad common libm4a audio_renderer audio_player fifo
)
                  