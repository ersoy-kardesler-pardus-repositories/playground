// An empty GTK+ window example written with C
// Written by Erdem Ersoy
// Reference: https://docs.gtk.org/gtk3/getting_started.html

#include <gtk/gtk.h>

static void activate(GtkApplication * app, gpointer user_data)
{
    GtkWidget * window;
    window = gtk_application_window_new(app);
    gtk_window_set_title(GTK_WINDOW(window), "Erdem's App");
    gtk_window_set_default_size(GTK_WINDOW(window), 300, 300);
    gtk_widget_show_all(window);
}

int main(int argc, char ** argv)
{
    GtkApplication * app;
    int exit_status;

    app = gtk_application_new("net.ersoykardesler.example", G_APPLICATION_FLAGS_NONE);
    g_signal_connect(app, "activate", G_CALLBACK(activate), NULL);
    exit_status = g_application_run(G_APPLICATION(app), argc, argv);
    g_object_unref(app);

    return exit_status;
}
