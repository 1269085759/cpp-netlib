//            Copyright (c) Glyn Matthews 2010.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)


#ifndef __BOOST_NETWORK_XML_TRAITS_PARSER_BACKEND_INC__
# define __BOOST_NETWORK_XML_TRAITS_PARSER_BACKEND_INC__


# include <boost/network/tags.hpp>


namespace boost {
namespace network {
namespace detail {
template <
    class Tag
    >
class basic_expat_parser;


template <
    class Tag
    >
struct parser_backend {
    typedef unsupported_tag<Tag> type;
};


template <>
struct parser_backend<tags::default_> {
    typedef basic_expat_parser<tags::default_> type;
};
} // namespace detail
} // namespace network
} // namespace boost


#endif // __BOOST_NETWORK_XML_TRAITS_PARSER_BACKEND_INC__
