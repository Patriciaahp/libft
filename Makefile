NAME = libft.a
CC = gcc       
CFLAGS = -Wall -Werror -Wextra
SRCS = ft_atoi.c, ft_bzero.c, ft_calloc.c, ft_isalnum.c, ft_isalpha.c,
ft_isascii.c, ft_isprint.c, ft_itoa.c, ft_memchr.c, ft_memcmp.c, ft_memcpy.c,
ft_memmove.c, ft_memset.c, ft_split.c, ft_strchr.c, ft_strdup.c, ft_strjoin.c,
ft_strlcat.c, ft_strlcpy.c, ft_strlen.c, ft_strncmp.c, ft_strncmp.c, ft_strnstr.c,
ft_strrchr.c, ft_strtrim.c, ft_substr.c, ft_tolower.c, ft_toupper.c

OBJS = $(SRCS:.c=.o)
(NAME) : $(OBJS)
	@ar crs $(NAME) $(OBJS) 

all: $(NAME)

%.o : %.c
	$(CC) $(CCFLAGS) -c -o $@ $< 
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
	echo "$(NAME) eliminado"
re: fclean all
.PHONY: all clean fclean re