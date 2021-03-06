#ifndef __DEVTTY_DOT_H__
#define __DEVTTY_DOT_H__

void tty_putc(uint8_t minor, unsigned char c);
void tty_pollirq_sio0(void);
void tty_pollirq_sio1(void);
void tty_pollirq_acia(void);
int rctty_open(uint8_t minor, uint16_t flag);

#endif
