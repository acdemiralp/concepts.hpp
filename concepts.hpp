#pragma once

#include <type_traits>

// concepts.hpp: concept equivalents of every boolean in <type_traits>.
namespace concepts
{
// Primary type categories.
template <class type>
concept void_                               = std::is_void_v                           <type>;
template <class type>
concept null_pointer                        = std::is_null_pointer_v                   <type>;
template <class type>
concept integral                            = std::is_integral_v                       <type>;
template <class type>
concept floating_point                      = std::is_floating_point_v                 <type>;
template <class type>
concept array                               = std::is_array_v                          <type>;
template <class type>
concept pointer                             = std::is_pointer_v                        <type>;
template <class type>
concept lvalue_reference                    = std::is_lvalue_reference_v               <type>;
template <class type>
concept rvalue_reference                    = std::is_rvalue_reference_v               <type>;
template <class type>
concept member_object_pointer               = std::is_member_object_pointer_v          <type>;
template <class type>
concept member_function_pointer             = std::is_member_function_pointer_v        <type>;
template <class type>
concept enum_                               = std::is_enum_v                           <type>;
template <class type>
concept union_                              = std::is_union_v                          <type>;
template <class type>
concept class_                              = std::is_class_v                          <type>;
template <class type>
concept function                            = std::is_function_v                       <type>;
                                                                                   
// Composite type categories.                                                      
template <class type>
concept reference                           = std::is_reference_v                      <type>;
template <class type>
concept arithmetic                          = std::is_arithmetic_v                     <type>;
template <class type>
concept fundamental                         = std::is_fundamental_v                    <type>;
template <class type>
concept object                              = std::is_object_v                         <type>;
template <class type>
concept scalar                              = std::is_scalar_v                         <type>;
template <class type>
concept compound                            = std::is_compound_v                       <type>;
template <class type>
concept member_pointer                      = std::is_member_pointer_v                 <type>;
                                                                                   
// Type properties.                                                           
template <class type>
concept const_                              = std::is_const_v                          <type>;
template <class type>
concept volatile_                           = std::is_volatile_v                       <type>;
template <class type>
concept trivial                             = std::is_trivial_v                        <type>;
template <class type>
concept trivially_copyable                  = std::is_trivially_copyable_v             <type>;
template <class type>
concept standard_layout                     = std::is_standard_layout_v                <type>;
template <class type>
concept empty                               = std::is_empty_v                          <type>;
template <class type>
concept polymorphic                         = std::is_polymorphic_v                    <type>;
template <class type>
concept abstract                            = std::is_abstract_v                       <type>;
template <class type>
concept final_                              = std::is_final_v                          <type>;
template <class type>
concept aggregate                           = std::is_aggregate_v                      <type>;
template <class type>
concept signed_                             = std::is_signed_v                         <type>;
template <class type>
concept unsigned_                           = std::is_unsigned_v                       <type>;
template <class type>
concept bounded_array                       = std::is_bounded_array_v                  <type>;
template <class type>
concept unbounded_array                     = std::is_unbounded_array_v                <type>;
//template <class type>
//concept scoped_enum                         = std::is_scoped_enum_v                    <type>;
template <class type, class... arguments>
concept constructible                       = std::is_constructible_v                  <type, arguments...>;
template <class type>
concept default_constructible               = std::is_default_constructible_v          <type>;
template <class type>
concept copy_constructible                  = std::is_copy_constructible_v             <type>;
template <class type>
concept move_constructible                  = std::is_move_constructible_v             <type>;
template <class to, class from>
concept assignable                          = std::is_assignable_v                     <to, from>;
template <class type>
concept copy_assignable                     = std::is_copy_assignable_v                <type>;
template <class type>
concept move_assignable                     = std::is_move_assignable_v                <type>;
template <class type, class other>
concept swappable_with                      = std::is_swappable_with_v                 <type, other>;
template <class type>
concept swappable                           = std::is_swappable_v                      <type>;
template <class type>
concept destructible                        = std::is_destructible_v                   <type>;
template <class type, class... arguments>
concept trivially_constructible             = std::is_trivially_constructible_v        <type, arguments...>;
template <class type>
concept trivially_default_constructible     = std::is_trivially_default_constructible_v<type>;
template <class type>
concept trivially_copy_constructible        = std::is_trivially_copy_constructible_v   <type>;
template <class type>
concept trivially_move_constructible        = std::is_trivially_move_constructible_v   <type>;
template <class to, class from>
concept trivially_assignable                = std::is_trivially_assignable_v           <to, from>;
template <class type>
concept trivially_copy_assignable           = std::is_trivially_copy_assignable_v      <type>;
template <class type>
concept trivially_move_assignable           = std::is_trivially_move_assignable_v      <type>;
template <class type>
concept trivially_destructible              = std::is_trivially_destructible_v         <type>;
template <class type, class... arguments>
concept nothrow_constructible               = std::is_nothrow_constructible_v          <type, arguments...>;
template <class type>
concept nothrow_default_constructible       = std::is_nothrow_default_constructible_v  <type>;
template <class type>
concept nothrow_copy_constructible          = std::is_nothrow_copy_constructible_v     <type>;
template <class type>
concept nothrow_move_constructible          = std::is_nothrow_move_constructible_v     <type>;
template <class to, class from>
concept nothrow_assignable                  = std::is_nothrow_assignable_v             <to, from>;
template <class type>
concept nothrow_copy_assignable             = std::is_nothrow_copy_assignable_v        <type>;
template <class type>
concept nothrow_move_assignable             = std::is_nothrow_move_assignable_v        <type>;
template <class type, class other>
concept nothrow_swappable_with              = std::is_nothrow_swappable_with_v         <type, other>;
template <class type>
concept nothrow_swappable                   = std::is_nothrow_swappable_v              <type>;
template <class type>
concept nothrow_destructible                = std::is_nothrow_destructible_v           <type>;
template <class type>
concept has_virtual_destructor              = std::has_virtual_destructor_v            <type>;
template <class type>
concept has_unique_object_representations   = std::has_unique_object_representations_v <type>;
template <class type>
concept reference_constructs_from_temporary = std::is_trivially_copy_constructible_v   <type>;
template <class type>
concept reference_converts_from_temporary   = std::is_trivially_copy_constructible_v   <type>;

// Type relations.
template <class type, class other>
concept same                                = std::is_same_v                           <type, other>;
template <class base, class derived>
concept base_of                             = std::is_base_of_v                        <base, derived>;
template <class from, class to>
concept convertible                         = std::is_convertible_v                    <from, to>;
template <class from, class to>
concept nothrow_convertible                 = std::is_nothrow_convertible_v            <from, to>;
//template <class type, class other>
//concept layout_compatible                   = std::is_layout_compatible_v               <type, other>;
//template <class base, class derived>
//concept pointer_interconvertible_base_of    = std::is_pointer_interconvertible_base_of_v<base, derived>;
template <class type, class... arguments>
concept invocable                           = std::is_invocable_v                      <   type, arguments...>;
template <class r, class type, class... arguments>
concept invocable_r                         = std::is_invocable_r_v                    <r, type, arguments...>;
template <class type, class... arguments>
concept nothrow_invocable                   = std::is_nothrow_invocable_v              <   type, arguments...>;
template <class r, class type, class... arguments>
concept nothrow_invocable_r                 = std::is_nothrow_invocable_r_v            <r, type, arguments...>;

// Logical operator traits.
template <class... types>
concept conjunction                         = std::conjunction_v                       <types...>;
template <class... types>
concept disjunction                         = std::disjunction_v                       <types...>;
template <class type>
concept negation                            = std::negation_v                          <type>;
}
