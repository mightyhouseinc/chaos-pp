# /* *************************************************************************
#  *                                                                         *
#  *    (C) Copyright Paul Mensonides 2003.                                  *
#  *                                                                         *
#  *    Use, modification, and distribution are subject to Version 1.0 of    *
#  *    the Boost Software License.  (See accompanying file LICENSE.)        *
#  *                                                                         *
#  *    See http://chaos-pp.sourceforge.net for most recent version.         *
#  *                                                                         *
#  ************************************************************************* */
#
# ifndef CHAOS_PREPROCESSOR_SEQ_VARIADIC_FOR_EACH_H
# define CHAOS_PREPROCESSOR_SEQ_VARIADIC_FOR_EACH_H
#
# include <chaos/preprocessor/config.h>
# include <chaos/preprocessor/lambda/ops.h>
# include <chaos/preprocessor/recursion/expr.h>
# include <chaos/preprocessor/seq/for_each_i.h>
# include <chaos/preprocessor/seq/zip.h>
#
# /* CHAOS_PP_VARIADIC_SEQ_FOR_EACH_I */
#
# if CHAOS_PP_VARIADICS
#    define CHAOS_PP_VARIADIC_SEQ_FOR_EACH_I(macro, seq, ...) CHAOS_PP_VARIADIC_SEQ_FOR_EACH_I_S(CHAOS_PP_STATE(), macro, seq, __VA_ARGS__)
#    define CHAOS_PP_VARIADIC_SEQ_FOR_EACH_I_ID() CHAOS_PP_VARIADIC_SEQ_FOR_EACH_I
#    define CHAOS_PP_VARIADIC_SEQ_FOR_EACH_I_ CHAOS_PP_LAMBDA(CHAOS_PP_VARIADIC_SEQ_FOR_EACH_I_ID)()
# endif
#
# /* CHAOS_PP_VARIADIC_SEQ_FOR_EACH_I_S */
#
# if CHAOS_PP_VARIADICS
#    define CHAOS_PP_VARIADIC_SEQ_FOR_EACH_I_S(s, macro, seq, ...) CHAOS_PP_SEQ_FOR_EACH_I_S(s, macro, CHAOS_PP_SEQ_ZIP(seq), __VA_ARGS__)
#    define CHAOS_PP_VARIADIC_SEQ_FOR_EACH_I_S_ID() CHAOS_PP_VARIADIC_SEQ_FOR_EACH_I_S
#    define CHAOS_PP_VARIADIC_SEQ_FOR_EACH_I_S_ CHAOS_PP_LAMBDA(CHAOS_PP_VARIADIC_SEQ_FOR_EACH_I_S_ID)()
# endif
#
# endif