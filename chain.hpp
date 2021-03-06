/**
 * Header file Represents a concatenation of two container 
 * @author Israel Buskila and Moran Oshia
 * @since 05-2019
 */ 
#pragma once

#include <iostream>

namespace itertools{



    template<typename T, typename U> 

    class chain{


        private:

            T x;
            U y;



        public:

//constructor
            chain(T x1 ,U y2):
            
				x(x1),
				y(y2) {}

//iterator
            class iterator{

        
                private:

          

                   
                    typename T :: iterator xBegin;
					typename T :: iterator xEnd;
                    typename U :: iterator yBegin;
                    typename U :: iterator yEnd;
					
					/* decltype(x.begin()) xBegin;

					decltype(x.end()) xEnd;

					decltype(y.begin()) yBegin;

					decltype(y.end()) yEnd;
 */


                public:

                  

                    iterator(typename T :: iterator iterXB,typename T :: iterator iterXE,typename U :: iterator iterYB,typename U :: iterator iterYE):
						xBegin(iterXB),
						xEnd(iterXE),
						yBegin(iterYB),
						yEnd(iterYE) 
						{}


		           /*  auto operator*() {

                        if(xBegin != xEnd){

                            return *xBegin;
                        }

			            return *yBegin;

		            }


		            iterator& operator++() {

                       if(xBegin != xEnd){

                            xBegin++;
			                return *this;

                        }

                        yBegin++;
			            return *this;

		            }


		            iterator operator++(int n) {

                        iterator it = *this; 
                         ++*this; 
                        return it; 

		            }

             
                    bool operator==(const iterator& r) const {

			            bool flag= (xBegin == r.xBegin) && (yBegin == r.yBegin);
						return flag;
		            }


		            bool operator!=(const iterator& r) const {

			            bool flag= (xBegin != r.xBegin) && (yBegin != r.yBegin);
						return flag;

                    }
 */
            }; 

//first element
            auto begin() const{

		        return x.begin();
	        }
//last element
	        auto end() const{

		        
				return x.end();

            }


		

		
    }; 

}
