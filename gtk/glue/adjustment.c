/*
 * Utility wrapper for the GtkAdjustment
 *
 * (C) 2002 Miguel de Icaza (miguel@ximian.com)
 */

#include <gtk/gtkadjustment.h>

/* Forward declarations */
void    gtksharp_gtk_adjustment_set_bounds (GtkAdjustment *adj,
					    gdouble lower,
					    gdouble upper,
					    gdouble step_increment,
					    gdouble page_increment,
					    gdouble page_size);

gdouble gtksharp_gtk_adjustment_get_lower (GtkAdjustment *adj);

gdouble gtksharp_gtk_adjustment_get_upper (GtkAdjustment *adj);

gdouble gtksharp_gtk_adjustment_get_step_increment (GtkAdjustment *adj);

gdouble gtksharp_gtk_adjustment_get_page_increment (GtkAdjustment *adj);

void    gtksharp_gtk_adjustment_set_page_increment (GtkAdjustment *adj,
						    gdouble page_increment);

gdouble gtksharp_gtk_adjustment_get_page_size (GtkAdjustment *adj);

void    gtksharp_gtk_adjustment_set_page_size (GtkAdjustment *adj, gdouble page_size);
/* */

void
gtksharp_gtk_adjustment_set_bounds (GtkAdjustment *adj,
				    gdouble lower, gdouble upper,
				    gdouble step_increment,
				    gdouble page_increment, gdouble page_size)
{
	adj->lower = lower;
	adj->upper = upper;
	adj->step_increment = step_increment;
	adj->page_increment = page_increment;
	adj->page_size = page_size;
	
	gtk_adjustment_changed (adj);
}

gdouble
gtksharp_gtk_adjustment_get_lower (GtkAdjustment *adj)
{
	return adj->lower;
}

gdouble
gtksharp_gtk_adjustment_get_upper (GtkAdjustment *adj)
{
	return adj->upper;
}

gdouble
gtksharp_gtk_adjustment_get_step_increment (GtkAdjustment *adj)
{
	return adj->step_increment;
}

gdouble
gtksharp_gtk_adjustment_get_page_increment (GtkAdjustment *adj)
{
	return adj->page_increment;
}

void
gtksharp_gtk_adjustment_set_page_increment (GtkAdjustment *adj, gdouble page_increment)
{
	adj->page_increment = page_increment;
	
	gtk_adjustment_changed (adj);
}

gdouble
gtksharp_gtk_adjustment_get_page_size (GtkAdjustment *adj)
{
	return adj->page_size;
}

void
gtksharp_gtk_adjustment_set_page_size (GtkAdjustment *adj, gdouble page_size)
{
	adj->page_size = page_size;

	gtk_adjustment_changed (adj);
}