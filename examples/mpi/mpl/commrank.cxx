/* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
   %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
   %%%%
   %%%% This program file is part of the book and course
   %%%% "Parallel Computing"
   %%%% by Victor Eijkhout, copyright 2020
   %%%%
   %%%% commrank.c : basics in MPL
   %%%%
   %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
   %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
*/

#include <cstdlib>
#include <iostream>
#include <mpl/mpl.hpp>
 
int main() {
#if 1
  //codesnippet mplcommcopy
  mpl::communicator comm_world =
    mpl::environment::comm_world();
  //codesnippet end
#else
  //codesnippet mplcommref
  const mpl::communicator &comm_world =
    mpl::environment::comm_world();
  //codesnippet end
#endif
  std::cout << "Hello world! I am running on \"" 
   	    << mpl::environment::processor_name() 
   	    << "\". My rank is "
  	    << comm_world.rank()
  	    << " out of " 
   	    << comm_world.size() << " processes.\n" << std::endl;
  return EXIT_SUCCESS;
}

