# Intro

We will be setting up a few different environments for various talks, please take a look at the one that your are most interested or are using today for more details.

# ReasonML

If you are using ReasonML you will need to have bs-platform installed or you will need to leverage npx to do it locally. Here are both ways real quick:

## Global
```
npm i bs-platform -g
bsb -init project-name -theme basic-reason
cd project-name
npm run build
```

## Local
```
npx -p bs-platform bsb -init project-name -theme basic-reason
cd project-name
npm run build
```

This will get you up and running real quick! If you have any issues just take a look are the installation doc: https://reasonml.github.io/docs/en/installation 
