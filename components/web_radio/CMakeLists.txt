idf_component_register(
    SRCS web_radio.c
    INCLUDE_DIRS include
    PRIV_REQUIRES vector audio_player audio_renderer common playlist http http_parser url_parser controls
)