#include "display.h"

// Ajuste o construtor conforme o seu display (ex: U8GLIB_SSD1306_128X64)
U8GLIB_SSD1306_128X64 u8g(U8G_I2C_OPT_NONE);

void inicializaDisplay() {
  u8g.setFont(u8g_font_unifont);
}

void draw(float distanciaCm) {
  u8g.drawStr(0, 20, "Distancia:");
  u8g.setPrintPos(0, 40);
  u8g.print(distanciaCm);
  u8g.print(" cm");
}
