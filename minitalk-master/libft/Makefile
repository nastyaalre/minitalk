NAME = libft.a

HEADER = libft.h

RM = rm -f

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS =	ft_isalnum.c		ft_isdigit.c		ft_isalpha.c		ft_isascii.c\
		ft_isprint.c		ft_strlcpy.c		ft_strlen.c			ft_memcpy.c\
		ft_memset.c 		ft_strlcat.c		ft_toupper.c		ft_tolower.c\
		ft_strchr.c			ft_strrchr.c		ft_strncmp.c		ft_memchr.c\
		ft_memcmp.c			ft_strnstr.c		ft_bzero.c			ft_memmove.c\
		ft_atoi.c			ft_calloc.c			ft_strdup.c			ft_substr.c\
		ft_strjoin.c		ft_strtrim.c		ft_itoa.c			ft_strmapi.c\
		ft_striteri.c		ft_putchar_fd.c		ft_putstr_fd.c		ft_putendl_fd.c\
		ft_putnbr_fd.c		ft_split.c

SRCS_B	=	ft_lstnew.c\
			ft_lstadd_front.c\
			ft_lstsize.c\
			ft_lstlast.c\
			ft_lstadd_back.c\
			ft_lstdelone.c\
			ft_lstclear.c\
			ft_lstiter.c\
			ft_lstmap.c

OBJS = $(SRCS:.c=.o)
OBJS_B = $(SRCS_B:.c=.o)

$(NAME): $(OBJS) $(HEADER)
	ar rcs $(NAME) $(OBJS)

bonus: $(NAME) $(OBJS_B)
	 ar rcs $(NAME) $(OBJS_B)

all: $(NAME)

clean:
	$(RM) $(OBJS) $(OBJS_B)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: bonus all clean fclean re