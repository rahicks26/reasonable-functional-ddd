type state = {count: int};

type action =
  | Increment
  | Decrement;

let initialState = {count: 0};

let reducer = (state, action) =>
  switch (action) {
  | Increment => {count: state.count + 1}
  | Decrement => {count: state.count - 1}
  };

[@react.component]
let make = () => {
  let (state, dispatch) = React.useReducer(reducer, initialState);

  <main>
    {React.string("Simple counter with reducer")}
    <div>
      <button onClick={_ => dispatch(Decrement)}>
        {React.string("Decrement")}
      </button>
      <span className="counter">
        {state.count}
      </span>
      <button onClick={_ => dispatch(Increment)}>
        {React.string("Increment")}
      </button>
    </div>
  </main>;
};
