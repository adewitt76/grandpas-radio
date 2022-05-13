idf_component_register(
  SRCS http.c
  INCLUDE_DIRS include
  REQUIRES nvs_flash
  PRIV_REQUIRES url_parser http_parser
)
                  