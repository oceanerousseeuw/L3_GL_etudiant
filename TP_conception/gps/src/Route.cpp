#include "Route.hpp"

bool Route::operator==(const Route & r) const {

  if(villeA_ == r.villeA_ && villeB_==r.villeB_ && distance_== r.distance_){
    return true;
  }else{
    return false;
  }
}

bool Route::operator!=(const Route & r) const {

    if(villeA_ != r.villeA_ || villeB_!=r.villeB_ || distance_ != r.distance_){
      return true;
    }else{
    return false;
  }
}

