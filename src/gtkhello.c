/*
* gtkhello.c
*
*  Created on: 2010-1-28
*      Author: young
*/

#include <gtk/gtk.h>

int main(int argc, char *argv[]) {
GtkWidget *wnd;
GtkWidget *label;

gtk_init(&argc, &argv);

wnd = gtk_window_new(GTK_WINDOW_TOPLEVEL);
gtk_window_set_title(GTK_WINDOW(wnd), "Hello GTK+!");
gtk_window_set_default_size(GTK_WINDOW(wnd), 300, 200);

label = gtk_label_new("Hello, welcome to the GTK+ world in Ubuntu 9.10\n\n(C) 2010 Chinsoft Studio");
gtk_container_add(GTK_CONTAINER(wnd), label);

g_signal_connect(GTK_OBJECT(wnd), "destroy", G_CALLBACK(gtk_main_quit), NULL);

gtk_widget_show_all(wnd);
gtk_main();

return 0;
}
