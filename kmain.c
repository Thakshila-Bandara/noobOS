    /* The C function */

   #include "drivers/frame_buffer.h"
   #include "drivers/serial_port.h"

    void kmain()
    {
        char buff[]="!!!Successfully loaded!!!";
	    fb_write(buff,sizeof(buff));
	
	serial_configure(SERIAL_COM1_BASE, Baud_115200);
	serial_write(SERIAL_COM1_BASE, buff, sizeof(buff));
	

    }

