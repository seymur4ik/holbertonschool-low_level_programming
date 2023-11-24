#include <stdarg.h>
#include <stdio.h>

/**
 *  * print_all - prints anything
 *   * @format: a list of types of arguments passed to the function
 *    *          c: char
 *     *          i: integer
 *      *          f: float
 *       *          s: char* (if the string is NULL, print (nil) instead)
 *        */
void print_all(const char * const format, ...)
{
	  va_list args;
	    unsigned int i = 0;
	      char *str;
	        char separator = ',';

		  va_start(args, format);

		    while (format && format[i])
			      {
				          if (i > 0 && (format[i] == 'c'  format[i] == 'i' 
								              format[i] == 'f' || format[i] == 's'))
						        printf(", ");

					      switch (format[i])
						          {
								      case 'c':
									            printf("%c", va_arg(args, int));
										          break;
											      case 'i':
											        printf("%d", va_arg(args, int));
												      break;
												          case 'f':
												            printf("%f", va_arg(args, double));
													          break;
														      case 's':
														        str = va_arg(args, char *);
															      if (!str)
																              str = "(nil)";
															            printf("%s", str);
																          break;
																	      default:
																	        separator = 0;
																		      break;
																		          }
					          i++;
						    }

		      va_end(args);

		        printf("\n");
}

int main(void)
{
	  print_all("ceis", 'B', 3, "stSchool");
	    return (0);
}
