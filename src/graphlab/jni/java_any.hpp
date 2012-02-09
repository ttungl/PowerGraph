/**  
 * Copyright (c) 2009 Carnegie Mellon University. 
 *     All rights reserved.
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing,
 *  software distributed under the License is distributed on an "AS
 *  IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 *  express or implied.  See the License for the specific language
 *  governing permissions and limitations under the License.
 *
 * For more about this software visit:
 *
 *      http://www.graphlab.ml.cmu.edu
 *
 */
 
/**
 * @file java_any.hpp
 * @author Jiunn Haur Lim <jiunnhal@cmu.edu>
 */
 
#ifndef JAVA_ANY_HPP
#define JAVA_ANY_HPP

#include <jni.h>

namespace graphlab {

  /**
   * Generic wrapper for Java objects (jobject). It creates a NewGlobalRef on
   * the jobject in the default constructor and copy constructor, and deletes
   * the GlobalRef in the destructor.
   */
  class java_any {
  
  private:
    
    /** Java object */
    jobject mobj;
    
  public:
  
    /**
     * Constructor for java_any.
     * Initializes this object with the associated Java object.
     * @param[in] env           JNI environment - used to create a new reference
     *                          to obj
     * @param[in] obj           Java object. This constructor will create a new
     *                          reference to the object to prevent garbage
     *                          collection.
     */
    java_any(JNIEnv *env, jobject &obj);
    
    /** The default constructor does nothing. mobj is initialized to NULL. */
    java_any();
    
    /**
     * Copy constructor for java_any.
     * If \c other has a \c mobj, creates a new reference to it.
     */
    java_any(const java_any& other);
    
    /**
     * Copy assignment operator for java_any.
     * If \c other has a \c mobj, creates a new reference to it.
     */
    java_any &operator=(const java_any &other);
    
    /**
     * Retrieves the associated Java object
     */
    jobject &obj();
    const jobject &obj() const;
    
    /**
     * Deletes the reference to the Java object so that it may be garbage
     * collected.
     */
    ~java_any();
  
  };

};

#endif