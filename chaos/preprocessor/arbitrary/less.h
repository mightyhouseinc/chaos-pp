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
# ifndef CHAOS_PREPROCESSOR_ARBITRARY_LESS_H
# define CHAOS_PREPROCESSOR_ARBITRARY_LESS_H
#
# include <chaos/preprocessor/arbitrary/detail/namespace.h>
# include <chaos/preprocessor/arbitrary/detail/utility.h>
# include <chaos/preprocessor/arbitrary/less_equal.h>
# include <chaos/preprocessor/config.h>
# include <chaos/preprocessor/lambda/ops.h>
# include <chaos/preprocessor/logical/compl.h>
# include <chaos/preprocessor/recursion/expr.h>
# include <chaos/preprocessor/recursion/machine.h>
#
# /* CHAOS_PP_LESS_AP */
#
# if CHAOS_PP_VARIADICS
#    define CHAOS_PP_LESS_AP(x, y) CHAOS_PP_LESS_AP_S(CHAOS_PP_STATE(), x, y)
#    define CHAOS_PP_LESS_AP_ID() CHAOS_PP_LESS_AP
#    define CHAOS_PP_LESS_AP_ CHAOS_PP_LAMBDA(CHAOS_PP_LESS_AP)
# endif
#
# /* CHAOS_PP_LESS_AP_S */
#
# if CHAOS_PP_VARIADICS
#    define CHAOS_PP_LESS_AP_S(s, x, y) CHAOS_PP_COMPL(CHAOS_PP_LESS_EQUAL_AP_S(s, y, x))
#    define CHAOS_PP_LESS_AP_S_ID() CHAOS_PP_LESS_AP_S
#    define CHAOS_PP_LESS_AP_S_ CHAOS_PP_LAMBDA(CHAOS_PP_LESS_AP_S)
# endif
#
# if CHAOS_PP_VARIADICS
#    define CHAOS_PP_LESS_AP_INTERNAL(s, x, y) CHAOS_PP_COMPL(CHAOS_PP_LESS_EQUAL_AP_INTERNAL(s, y, x))
# endif
#
# if CHAOS_PP_VARIADICS
#    define CHAOS_PP_INSTRUCTION_0xCHAOS_0xARBITRARY_0xLESS(s, p, x, y, k, ...) (, 0xCHAOS(0xARBITRARY(0xLESS_EQUAL)), p ## y, p ## x, 0xCHAOS(0xCOMPL), k, p ## __VA_ARGS__)
# endif
#
# endif