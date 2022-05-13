idf_component_register(
  SRCS http_parser.c
  INCLUDE_DIRS include
)
  # REQUIRES nvs_flash
  # PRIV_REQUIRES url_parser nghttp
                  