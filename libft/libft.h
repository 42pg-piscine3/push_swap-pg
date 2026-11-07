/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshtan <joshtan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 12:20:01 by joshtan           #+#    #+#             */
/*   Updated: 2026/09/11 14:50:12 by joshtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
/* Part 1 - libc functions, reimplemented with the ft_ prefix */

/**
 * @defgroup ctype Character classification functions
 * @brief Test a character against a specific class.
 *
 * @param c ASCII value of char to check.
 * @return int
 *      - `1` if the character matches the tested class
 *      - `0` if the character does not match
 * @{
 */
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
/** @} */

/**
 * @brief Converts a lowercase letter to uppercase.
 *
 * @param c Character to convert.
 * @return int Uppercase equivalent of c if c is a lowercase letter,
 *      otherwise c unchanged.
 */
int				ft_toupper(int c);

/**
 * @brief Converts an uppercase letter to lowercase.
 *
 * @param c Character to convert.
 * @return int Lowercase equivalent of c if c is an uppercase letter,
 *      otherwise c unchanged.
 */
int				ft_tolower(int c);

/**
 * @brief Calculates the length of a string.
 *
 * @param s String to measure.
 * @return size_t Number of characters before the terminating null byte.
 */
size_t			ft_strlen(const char *s);

/**
 * @brief Fills the first n bytes of the memory area pointed to by s
 * 			with the constant byte c.
 *
 * @param s Pointer to the starting address of the memory block to fill
 * @param c Character to set
 * @param n Number of bytes to copy
 * @return void* Pointer to the memory area s.
 */
void			*ft_memset(void *s, int c, size_t n);

/**
 * @brief Sets the first n bytes of the memory area s to zero.
 *
 * @param s Pointer to the memory area to zero out.
 * @param n Number of bytes to set to zero.
 * @return void
 */
void			ft_bzero(void *s, size_t n);

/**
 * @brief Copies n bytes from memory area src to memory area dest.
 *
 * @param dest Destination memory area.
 * @param src Source memory area.
 * @param n Number of bytes to copy.
 * @return void* Pointer to dest.
 */
void			*ft_memcpy(void *dest, const void *src, size_t n);

/**
 * @brief Copies n bytes from memory area src to memory area dest,
 *      handling overlapping memory areas correctly.
 *
 * @param dest Destination memory area.
 * @param src Source memory area.
 * @param n Number of bytes to copy.
 * @return void* Pointer to dest.
 */
void			*ft_memmove(void *dest, const void *src, size_t n);

/**
 * @brief Copies src to dst, truncating the result to fit in size bytes
 *      and always null-terminating it (as long as size is not 0).
 *
 * @param dst Destination buffer.
 * @param src Source string.
 * @param size Total size of the destination buffer.
 * @return size_t Length of src (the length of the string it tried to create).
 */
size_t			ft_strlcpy(char *dst, const char *src, size_t size);

/**
 * @brief Appends src to the end of dst, truncating the result to fit in
 *      size bytes and always null-terminating it (as long as there was
 *      room to do so).
 *
 * @param dst Destination buffer containing a null-terminated string.
 * @param src Source string to append.
 * @param size Total size of the destination buffer.
 * @return size_t Initial length of dst plus the length of src
 *      (the length of the string it tried to create).
 */
size_t			ft_strlcat(char *dst, const char *src, size_t size);

/**
 * @brief Locates the first occurrence of c in the string s.
 *
 * @param s String to search.
 * @param c Character to locate.
 * @return char* Pointer to the first occurrence of c in s,
 *      or NULL if c is not found.
 */
char			*ft_strchr(const char *s, int c);

/**
 * @brief Locates the last occurrence of c in the string s.
 *
 * @param s String to search.
 * @param c Character to locate.
 * @return char* Pointer to the last occurrence of c in s,
 *      or NULL if c is not found.
 */
char			*ft_strrchr(const char *s, int c);

/**
 * @brief Compares at most the first n characters of the strings s1 and s2.
 *
 * @param s1 First string.
 * @param s2 Second string.
 * @param n Maximum number of characters to compare.
 * @return int Difference between the first differing characters
 *      (as unsigned char), or 0 if the compared portions are equal.
 */
int				ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * @brief Locates the first occurrence of c in the first n bytes of s.
 *
 * @param s Memory area to search.
 * @param c Byte value to locate.
 * @param n Number of bytes to search.
 * @return void* Pointer to the first occurrence of c,
 *      or NULL if not found within the first n bytes.
 */
void			*ft_memchr(const void *s, int c, size_t n);

/**
 * @brief Compares the first n bytes of the memory areas s1 and s2.
 *
 * @param s1 First memory area.
 * @param s2 Second memory area.
 * @param n Number of bytes to compare.
 * @return int Difference between the first differing bytes
 *      (as unsigned char), or 0 if the compared areas are equal.
 */
int				ft_memcmp(const void *s1, const void *s2, size_t n);

/**
 * @brief Locates the first occurrence of the substring little in big,
 *      searching at most len characters.
 *
 * @param big String to search.
 * @param little Substring to locate.
 * @param len Maximum number of characters of big to search.
 * @return char* Pointer to the beginning of the located substring,
 *      or NULL if little is not found within len characters.
 */
char			*ft_strnstr(const char *big, const char *little, size_t len);

/**
 * @brief Converts the initial portion of str to an int,
 *      skipping leading whitespace and an optional sign.
 *
 * @param str String to convert.
 * @return int Converted integer value.
 */
int				ft_atoi(const char *str);

/**
 * @brief Allocates memory for an array of nmemb elements of size bytes
 *      each, with all bytes initialized to zero.
 *
 * @param nmemb Number of elements to allocate.
 * @param size Size in bytes of each element.
 * @return void* Pointer to the allocated memory,
 *      or NULL if the allocation fails.
 */
void			*ft_calloc(size_t nmemb, size_t size);

/**
 * @brief Allocates and returns a copy of the string s.
 *
 * @param s String to duplicate.
 * @return char* Pointer to the newly allocated copy of s,
 *      or NULL if the allocation fails.
 */
char			*ft_strdup(const char *s);

/* Part 2 - additional functions */

/**
 * @brief Allocates and returns a substring of s, starting at index start
 *      and at most len bytes long.
 *
 * @param s Source string.
 * @param start Starting index of the substring within s.
 * @param len Maximum length of the substring.
 * @return char* The substring, or NULL if the allocation fails.
 */
char			*ft_substr(char const *s, unsigned int start, size_t len);

/**
 * @brief Allocates and returns a new string made of s1 followed by s2.
 *
 * @param s1 Prefix string.
 * @param s2 Suffix string.
 * @return char* The joined string, or NULL if the allocation fails.
 */
char			*ft_strjoin(char const *s1, char const *s2);

/**
 * @brief Allocates and returns a copy of s1 without the leading and
 *      trailing characters that appear in set.
 *
 * @param s1 String to trim.
 * @param set Set of characters to strip from both ends.
 * @return char* The trimmed string, or NULL if the allocation fails.
 */
char			*ft_strtrim(char const *s1, char const *set);

/**
 * @brief Splits s into an array of strings using c as the delimiter.
 *
 * @param s String to split.
 * @param c Delimiter character.
 * @return char** NULL-terminated array of new strings, or NULL if any
 *      allocation fails.
 */
char			**ft_split(char const *s, char c);

/**
 * @brief Allocates and returns the decimal string representation of n.
 *
 * @param n Integer to convert.
 * @return char* The string, or NULL if the allocation fails.
 */
char			*ft_itoa(int n);

/**
 * @brief Applies f to each character of s (with its index) and returns
 *      a new string built from the results.
 *
 * @param s String to iterate over.
 * @param f Function applied to each (index, character) pair.
 * @return char* The new string, or NULL if the allocation fails.
 */
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**
 * @brief Applies f to each character of s (with its index), passing
 *      each character by address so f may modify it in place.
 *
 * @param s String to iterate over.
 * @param f Function applied to each (index, &character) pair.
 * @return void
 */
void			ft_striteri(char *s, void (*f)(unsigned int, char *));

/**
 * @brief Writes the character c to the file descriptor fd.
 *
 * @param c Character to output.
 * @param fd File descriptor to write to.
 * @return void
 */
void			ft_putchar_fd(char c, int fd);

/**
 * @brief Writes the string s to the file descriptor fd.
 *
 * @param s String to output.
 * @param fd File descriptor to write to.
 * @return void
 */
void			ft_putstr_fd(char *s, int fd);

/**
 * @brief Writes the string s, followed by a newline, to fd.
 *
 * @param s String to output.
 * @param fd File descriptor to write to.
 * @return void
 */
void			ft_putendl_fd(char *s, int fd);

/**
 * @brief Writes the integer n to the file descriptor fd.
 *
 * @param n Integer to output.
 * @param fd File descriptor to write to.
 * @return void
 */
void			ft_putnbr_fd(int n, int fd);

/* Part 3 - linked list */

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/**
 * @brief Allocates and returns a new list node, with 'content' set
 *      and 'next' set to NULL.
 *
 * @param content Content to store in the new node.
 * @return t_list* The new node, or NULL if the allocation fails.
 */
t_list			*ft_lstnew(void *content);

/**
 * @brief Adds the node 'new' at the beginning of the list.
 *
 * @param lst Address of a pointer to the first node of a list.
 * @param new Node to add.
 * @return void
 */
void			ft_lstadd_front(t_list **lst, t_list *new);

/**
 * @brief Counts the number of nodes in the list.
 *
 * @param lst Beginning of the list.
 * @return unsigned int Number of nodes in the list.
 */
unsigned int	ft_lstsize(t_list *lst);

/**
 * @brief Returns the last node of the list.
 *
 * @param lst Beginning of the list.
 * @return t_list* The last node of the list, or NULL if 'lst' is NULL.
 */
t_list			*ft_lstlast(t_list *lst);

/**
 * @brief Adds the node 'new' at the end of the list.
 *
 * @param lst Address of a pointer to the first node of a list.
 * @param new Node to add.
 * @return void
 */
void			ft_lstadd_back(t_list **lst, t_list *new);

/**
 * @brief Frees a node's content with 'del', then frees the node
 *      itself. Does NOT touch the rest of the list.
 *
 * @param lst Node to free.
 * @param del Function used to delete the node's content.
 * @return void
 */
void			ft_lstdelone(t_list *lst, void (*del)(void *));

/**
 * @brief Deletes and frees every node of the list (content via
 *      'del', then the node itself), then sets '*lst' to NULL.
 *
 * @param lst Address of a pointer to a node.
 * @param del Function used to delete a node's content.
 * @return void
 */
void			ft_lstclear(t_list **lst, void (*del)(void *));

/**
 * @brief Applies the function 'f' to the content of every node of
 *      the list, in order.
 *
 * @param lst Beginning of the list.
 * @param f Function applied to each node's content.
 * @return void
 */
void			ft_lstiter(t_list *lst, void (*f)(void *));

/**
 * @brief Creates a new list by applying 'f' to the content of each
 *      node of 'lst', in order.
 *
 * @param lst Beginning of the list.
 * @param f Function applied to each node's content; its return
 *      value becomes the content of the matching new node.
 * @param del Function used to delete a content that could not be
 *      stored (e.g. if a later allocation fails).
 * @return t_list* The new list, or NULL if any allocation fails.
 */
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));

#endif
