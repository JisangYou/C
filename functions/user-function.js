var mongoose = require('mongoose');
var users = require('../models/users');

exports.signUp = function(email, password, name, callback) {
    
        var newUser = new users({
            email : email,
            password : password,
            name : name,
        });
    
        users.find({email : email}, function(err, user) {
            if(user.length != 0) {
                callback({
                    result : 'failure',
                    message : 'response : already existed email address',
                });
            } else {
                newUser.save(function(err, user) {
                    if(!err) {
                        callback({
                            result : 'success',
                            message : 'response : sign-up succeeded',
                            user : user
                        });
                    } else {
                        callback({
                            result : 'failure',
                            message : 'response : sign-up failed by error & ' + err
                        });
                    }
                });
            }
        });
}

exports.signIn = function(email, password, callback) {
    users.find({email : email, password : password}, function(err, user) {
        if(user.length != 0) {
            console.log("Sign In");
            callback({
                result : 'success',
                message : 'response : sign-in succeeded',
                user : user[0]
            });
        } else {
            callback({
                result : 'failure',
                message : 'response : no account message'
            });
        }
    });
}

exports.getUser = function(userId, callback) {
    users.findById(userId, function(err, user) {
        callback(user);
    });
};

exports.followOrUnfollow = function(userId, tutor, callback) {
    users.findById(userId, function(err, user) {
        var index = -1;

        for(var i=0; i<user.following.length; i++) {
            if(user.following[i].userId == tutor.tutorId) {
                index = i;
                break;
            }
        }
        
        if(index >= 0) {
            var following = user.following[index];
            user.following.splice(index,1);

            user.save(function(err) {
                if(!err) {
                    callback(following)
                } else {
                    callback(null)
                }
            })
        } else {
            user.following.push({
                userId : tutor.tutorId,
                name : tutor.name,
                imageUrl : tutor.imageUrl
            });

            user.save(function(err, user) {
                if(!err) {
                    console.log("succeed");
                    callback(user.following[user.following.length-1])
                } else {
                    console.log("failed");
                    callback(null)
                }
            });
        }
    });
}



exports.uploadImage = function(userId, files, imgStorage, callback) {

   
    console.log(files);
    // console.log("-----------------------------------------------------------------");

    
    var path = files.path;
    
     console.log("path = "+path);

      users.findById(userId, function(err,user){
   
        user.imageUrl = path;


        user.save(function(err, user){
            
            
            if(!err) {
                console.log("succeed");
                callback(user);
            } else {
                console.log("failed");
                callback(null);
            }
           
        })
      
     
      });
  }
  
  exports.downloadImage = function(userId, callback){
      console.log("downloadImage")
      users.findById(userId, function(err, user) {
          callback(user);
         
      });
  }

  exports.putSelectSkills = function(userId, skills, callback){
    
    users.findById(userId, function(err, user){
        
        if(skills == null){
        for (var i=0; i<skills.length; i++){
            user.followingSkills.push(skills[i]);
        }
            user.save(function(err, user){
                callback(user);  
            })
        }
        else{
            user.followingSkills =[];  
        for (var i=0; i<skills.length; i++){        
            user.followingSkills.push(skills[i]);
        }
            user.save(function(err, user){
                    callback(user);  
            })
        }
     })
}
     
  